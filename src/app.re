[%bs.raw {|require('./app.css')|}];

[@bs.module] external logo : string = "./logo.svg";

let component = ReasonReact.statelessComponent("App");

let rrse = (text: string) => (ReasonReact.stringToElement(text));

let make = (~message, _children) => {
  ...component,
  render: (_self) =>
    <div className="App">
      <div className="App-header">
        <img src=logo className="App-logo" alt="logo" />
        <h2> (rrse(message)) </h2>
      </div>
      <p className="App-intro">
        (rrse("To get started, edit!"))
        <code> (rrse(" src/app.re ")) </code>
        (rrse("and save to reload. Hot reload!"))
      </p>
      <MyButt />
    </div>
};
