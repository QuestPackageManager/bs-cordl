#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Hierarchy/Item.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceHandle_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/Hierarchy/zzzz__Item_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__Category_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceHandle_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Hierarchy::Item.get_Parent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::ImmersiveDebugger::Hierarchy::Item* (::Meta::XR::ImmersiveDebugger::Hierarchy::Item::*)()>(
    &::Meta::XR::ImmersiveDebugger::Hierarchy::Item::get_Parent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a675a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), { "get_Parent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Hierarchy::Item.get_Depth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::XR::ImmersiveDebugger::Hierarchy::Item::*)()>(&::Meta::XR::ImmersiveDebugger::Hierarchy::Item::get_Depth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a675b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), { "get_Depth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Hierarchy::Item.get_Handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle (::Meta::XR::ImmersiveDebugger::Hierarchy::Item::*)()>(
    &::Meta::XR::ImmersiveDebugger::Hierarchy::Item::get_Handle)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a675b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), { "get_Handle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Hierarchy::Item.get_Id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::XR::ImmersiveDebugger::Hierarchy::Item::*)()>(&::Meta::XR::ImmersiveDebugger::Hierarchy::Item::get_Id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a5f6c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), { "get_Id", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Hierarchy::Item.get_Category
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::ImmersiveDebugger::Manager::Category (::Meta::XR::ImmersiveDebugger::Hierarchy::Item::*)()>(
    &::Meta::XR::ImmersiveDebugger::Hierarchy::Item::get_Category)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a675cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Hierarchy::Item.get_Dirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::Hierarchy::Item::*)()>(&::Meta::XR::ImmersiveDebugger::Hierarchy::Item::get_Dirty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a675d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), { "get_Dirty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Hierarchy::Item.set_Dirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Hierarchy::Item::*)(bool)>(&::Meta::XR::ImmersiveDebugger::Hierarchy::Item::set_Dirty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a675e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), { "set_Dirty", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Hierarchy::Item.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Hierarchy::Item::*)()>(&::Meta::XR::ImmersiveDebugger::Hierarchy::Item::Clear)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5a675e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Hierarchy::Item.Unregister
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Hierarchy::Item::*)()>(&::Meta::XR::ImmersiveDebugger::Hierarchy::Item::Unregister)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5a67628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Hierarchy::Item.Register
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Hierarchy::Item::*)(::Meta::XR::ImmersiveDebugger::Hierarchy::Item*)>(
    &::Meta::XR::ImmersiveDebugger::Hierarchy::Item::Register)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5a677f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Hierarchy::Item.get_Owner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::XR::ImmersiveDebugger::Hierarchy::Item::*)()>(&::Meta::XR::ImmersiveDebugger::Hierarchy::Item::get_Owner)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Hierarchy::Item.get_Label
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::XR::ImmersiveDebugger::Hierarchy::Item::*)()>(&::Meta::XR::ImmersiveDebugger::Hierarchy::Item::get_Label)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Hierarchy::Item.ComputeNumberOfChildren
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::XR::ImmersiveDebugger::Hierarchy::Item::*)()>(&::Meta::XR::ImmersiveDebugger::Hierarchy::Item::ComputeNumberOfChildren)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a67c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Hierarchy::Item.get_Valid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::Hierarchy::Item::*)()>(&::Meta::XR::ImmersiveDebugger::Hierarchy::Item::get_Valid)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Hierarchy::Item.ComputeNeedsRefresh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::Hierarchy::Item::*)()>(&::Meta::XR::ImmersiveDebugger::Hierarchy::Item::ComputeNeedsRefresh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a67c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Hierarchy::Item.BuildContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Hierarchy::Item::*)()>(&::Meta::XR::ImmersiveDebugger::Hierarchy::Item::BuildContent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a67c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Hierarchy::Item.ClearContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Hierarchy::Item::*)()>(&::Meta::XR::ImmersiveDebugger::Hierarchy::Item::ClearContent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a67c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Hierarchy::Item.BuildChildren
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Hierarchy::Item::*)()>(&::Meta::XR::ImmersiveDebugger::Hierarchy::Item::BuildChildren)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a67c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Hierarchy::Item.ClearChildren
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Hierarchy::Item::*)()>(&::Meta::XR::ImmersiveDebugger::Hierarchy::Item::ClearChildren)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a67c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Hierarchy::Item._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Hierarchy::Item::*)()>(&::Meta::XR::ImmersiveDebugger::Hierarchy::Item::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a67c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Meta::XR::ImmersiveDebugger::Hierarchy::Item*& Meta::XR::ImmersiveDebugger::Hierarchy::Item::__cordl_internal_get__parent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parent;
}
constexpr ::Meta::XR::ImmersiveDebugger::Hierarchy::Item* const& Meta::XR::ImmersiveDebugger::Hierarchy::Item::__cordl_internal_get__parent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parent;
}
constexpr void Meta::XR::ImmersiveDebugger::Hierarchy::Item::__cordl_internal_set__parent(::Meta::XR::ImmersiveDebugger::Hierarchy::Item* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parent = value;
}
constexpr int32_t& Meta::XR::ImmersiveDebugger::Hierarchy::Item::__cordl_internal_get__depth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____depth;
}
constexpr int32_t const& Meta::XR::ImmersiveDebugger::Hierarchy::Item::__cordl_internal_get__depth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____depth;
}
constexpr void Meta::XR::ImmersiveDebugger::Hierarchy::Item::__cordl_internal_set__depth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____depth = value;
}
constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle& Meta::XR::ImmersiveDebugger::Hierarchy::Item::__cordl_internal_get__handle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handle;
}
constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle const& Meta::XR::ImmersiveDebugger::Hierarchy::Item::__cordl_internal_get__handle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handle;
}
constexpr void Meta::XR::ImmersiveDebugger::Hierarchy::Item::__cordl_internal_set__handle(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handle = value;
}
constexpr bool& Meta::XR::ImmersiveDebugger::Hierarchy::Item::__cordl_internal_get__Dirty_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Dirty_k__BackingField;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::Hierarchy::Item::__cordl_internal_get__Dirty_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Dirty_k__BackingField;
}
constexpr void Meta::XR::ImmersiveDebugger::Hierarchy::Item::__cordl_internal_set__Dirty_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Dirty_k__BackingField = value;
}
inline ::Meta::XR::ImmersiveDebugger::Hierarchy::Item* Meta::XR::ImmersiveDebugger::Hierarchy::Item::get_Parent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), { "get_Parent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(this, ___internal_method);
}
inline int32_t Meta::XR::ImmersiveDebugger::Hierarchy::Item::get_Depth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), { "get_Depth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle Meta::XR::ImmersiveDebugger::Hierarchy::Item::get_Handle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), { "get_Handle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>(this, ___internal_method);
}
inline int32_t Meta::XR::ImmersiveDebugger::Hierarchy::Item::get_Id() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), { "get_Id", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::Manager::Category Meta::XR::ImmersiveDebugger::Hierarchy::Item::get_Category() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::Manager::Category>(this, ___internal_method);
}
inline bool Meta::XR::ImmersiveDebugger::Hierarchy::Item::get_Dirty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), { "get_Dirty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Hierarchy::Item::set_Dirty(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), { "set_Dirty", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::Hierarchy::Item::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Hierarchy::Item::Unregister() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Hierarchy::Item::Register(::Meta::XR::ImmersiveDebugger::Hierarchy::Item* parent) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent);
}
inline ::System::Object* Meta::XR::ImmersiveDebugger::Hierarchy::Item::get_Owner() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::StringW Meta::XR::ImmersiveDebugger::Hierarchy::Item::get_Label() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t Meta::XR::ImmersiveDebugger::Hierarchy::Item::ComputeNumberOfChildren() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Meta::XR::ImmersiveDebugger::Hierarchy::Item::get_Valid() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Meta::XR::ImmersiveDebugger::Hierarchy::Item::ComputeNeedsRefresh() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Hierarchy::Item::BuildContent() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Hierarchy::Item::ClearContent() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Hierarchy::Item::BuildChildren() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Hierarchy::Item::ClearChildren() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Hierarchy::Item::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::Hierarchy::Item* Meta::XR::ImmersiveDebugger::Hierarchy::Item::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Hierarchy::Item::Item() {}
