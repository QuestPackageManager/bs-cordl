#pragma once
// IWYU pragma private; include "ENet/ENetCallbacks.hpp"
#include "ENet/zzzz__ENetCallbacks_def.hpp"
#include "ENet/zzzz__AllocCallback_def.hpp"
#include "ENet/zzzz__FreeCallback_def.hpp"
#include "ENet/zzzz__NoMemoryCallback_def.hpp"
// Ctor Parameters [CppParam { name: "malloc", ty: "::ENet::AllocCallback*", modifiers: "", def_value: Some("{}") }, CppParam { name: "free", ty: "::ENet::FreeCallback*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "noMemory", ty: "::ENet::NoMemoryCallback*", modifiers: "", def_value: Some("{}") }]
constexpr ::ENet::ENetCallbacks::ENetCallbacks(::ENet::AllocCallback* malloc, ::ENet::FreeCallback* free, ::ENet::NoMemoryCallback* noMemory) noexcept {
  this->malloc = malloc;
  this->free = free;
  this->noMemory = noMemory;
}
// Ctor Parameters []
constexpr ::ENet::ENetCallbacks::ENetCallbacks() {}
