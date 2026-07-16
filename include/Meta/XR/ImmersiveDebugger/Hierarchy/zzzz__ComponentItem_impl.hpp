#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Hierarchy/ComponentItem.hpp"
#include "Meta/XR/ImmersiveDebugger/Hierarchy/zzzz__Item_1_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/Hierarchy/zzzz__ComponentItem_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__Category_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceHandle_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem.get_Label
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem::*)()>(&::Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem::get_Label)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a68334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem.get_Valid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem::*)()>(&::Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem::get_Valid)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5a68350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem.get_Category
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::ImmersiveDebugger::Manager::Category (::Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem::*)()>(
    &::Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem::get_Category)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5a683b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem.BuildHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle (::Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem::*)()>(
    &::Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem::BuildHandle)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5a683c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem::*)()>(&::Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5a680e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem::get_Label() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem::get_Valid() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::Manager::Category Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem::get_Category() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::Manager::Category>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem::BuildHandle() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem* Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem::ComponentItem() {}
