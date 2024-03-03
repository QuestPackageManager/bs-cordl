#pragma once
#include "System/Security/Cryptography/zzzz__DSAParameters_def.hpp"
// Ctor Parameters [CppParam { name: "P", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "Q", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "G", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "Y", ty:
// "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "J", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "X", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "Seed", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "Counter", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::DSAParameters::DSAParameters(::ArrayW<uint8_t, ::Array<uint8_t>*> P, ::ArrayW<uint8_t, ::Array<uint8_t>*> Q, ::ArrayW<uint8_t, ::Array<uint8_t>*> G,
                                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> Y, ::ArrayW<uint8_t, ::Array<uint8_t>*> J, ::ArrayW<uint8_t, ::Array<uint8_t>*> X,
                                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> Seed, int32_t Counter) noexcept {
  this->P = P;
  this->Q = Q;
  this->G = G;
  this->Y = Y;
  this->J = J;
  this->X = X;
  this->Seed = Seed;
  this->Counter = Counter;
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::DSAParameters::DSAParameters() {}
