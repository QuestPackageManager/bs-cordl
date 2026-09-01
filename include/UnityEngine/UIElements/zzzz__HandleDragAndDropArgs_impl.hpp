#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\HandleDragAndDropArgs.hpp"
#include "UnityEngine/UIElements/zzzz__DragAndDropArgs_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__HandleDragAndDropArgs_def.hpp"
#include "UnityEngine/UIElements/zzzz__DragAndDropArgs_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::HandleDragAndDropArgs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::HandleDragAndDropArgs::*)(::UnityEngine::Vector2, ::UnityEngine::UIElements::DragAndDropArgs)>(
    &::UnityEngine::UIElements::HandleDragAndDropArgs::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6d8bad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HandleDragAndDropArgs>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::UIElements::DragAndDropArgs>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::HandleDragAndDropArgs::_ctor(::UnityEngine::Vector2 position, ::UnityEngine::UIElements::DragAndDropArgs dragAndDropArgs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HandleDragAndDropArgs>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::UIElements::DragAndDropArgs>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, dragAndDropArgs);
}
// Ctor Parameters [CppParam { name: "m_DragAndDropArgs", ty: "::UnityEngine::UIElements::DragAndDropArgs", modifiers: "", def_value: Some("{}") }, CppParam { name: "_position_k__BackingField", ty:
// "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::HandleDragAndDropArgs::HandleDragAndDropArgs(::UnityEngine::UIElements::DragAndDropArgs m_DragAndDropArgs,
                                                                                  ::UnityEngine::Vector2 _position_k__BackingField) noexcept {
  this->m_DragAndDropArgs = m_DragAndDropArgs;
  this->_position_k__BackingField = _position_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::HandleDragAndDropArgs::HandleDragAndDropArgs() {}
