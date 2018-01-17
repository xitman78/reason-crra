

let rrse = ReasonReact.stringToElement;

type action =
  | Plus
  | Minus;

type state = {
  counter: int
};

let component = ReasonReact.reducerComponent("MyButt");

let make = (_children) => {
  ...component,
  initialState: () => { counter: 0 },
  reducer: (action, state) =>
    switch (action) {
    | Plus => ReasonReact.Update({counter: state.counter + 1})
    | Minus => ReasonReact.Update({counter: state.counter - 1})
  },
  render: ({state, send}) => {
    Js.log("Render log "  ++ string_of_int(state.counter));
    <h3 className="just">
        (rrse(string_of_int(state.counter)))<hr />
        <button onClick=(_e => send(Plus))>(rrse("Plus"))</button>
        <button onClick=(_e => send(Minus))>(rrse("Minus"))</button>
    </h3>
  }
};
