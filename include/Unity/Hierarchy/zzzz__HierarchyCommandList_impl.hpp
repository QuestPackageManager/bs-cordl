#pragma once
// IWYU pragma private; include "Unity\Hierarchy\HierarchyCommandList.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyCommandList_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyCommandList_def.hpp"
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyCommandList_BindingsMarshaller.ConvertToNative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Unity::Hierarchy::HierarchyCommandList*)>(
    &::Unity::Hierarchy::HierarchyCommandList_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b397a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyCommandList_BindingsMarshaller*>(),
                                                                                           { "ConvertToNative", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchyCommandList*>() } })));
    return ___internal_method;
  }
};
inline ::System::IntPtr Unity::Hierarchy::HierarchyCommandList_BindingsMarshaller::ConvertToNative(::Unity::Hierarchy::HierarchyCommandList* cmdList) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyCommandList_BindingsMarshaller*>(),
                                                                                         { "ConvertToNative", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchyCommandList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, cmdList);
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyCommandList_BindingsMarshaller::HierarchyCommandList_BindingsMarshaller() {}
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyCommandList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyCommandList::*)(::System::IntPtr)>(&::Unity::Hierarchy::HierarchyCommandList::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b39578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyCommandList*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyCommandList.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyCommandList::*)()>(&::Unity::Hierarchy::HierarchyCommandList::Finalize)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6b39584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyCommandList*>(), { ::i2c::class_of<::Unity::Hierarchy::HierarchyCommandList*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyCommandList.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyCommandList::*)()>(&::Unity::Hierarchy::HierarchyCommandList::Dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6b39620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyCommandList*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyCommandList.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyCommandList::*)(bool)>(&::Unity::Hierarchy::HierarchyCommandList::Dispose)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b395cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyCommandList*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyCommandList.FromIntPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Hierarchy::HierarchyCommandList* (*)(::System::IntPtr)>(&::Unity::Hierarchy::HierarchyCommandList::FromIntPtr)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6b396c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyCommandList*>(), { "FromIntPtr", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyCommandList.Destroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Unity::Hierarchy::HierarchyCommandList::Destroy)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b39688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyCommandList*>(), { "Destroy", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyCommandList.CreateCommandList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::Unity::Hierarchy::HierarchyCommandList::CreateCommandList)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6b3974c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyCommandList*>(), { "CreateCommandList", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& Unity::Hierarchy::HierarchyCommandList::__cordl_internal_get_m_Ptr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr ::System::IntPtr const& Unity::Hierarchy::HierarchyCommandList::__cordl_internal_get_m_Ptr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr void Unity::Hierarchy::HierarchyCommandList::__cordl_internal_set_m_Ptr(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Ptr = value;
}
constexpr bool& Unity::Hierarchy::HierarchyCommandList::__cordl_internal_get_m_IsOwner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsOwner;
}
constexpr bool const& Unity::Hierarchy::HierarchyCommandList::__cordl_internal_get_m_IsOwner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsOwner;
}
constexpr void Unity::Hierarchy::HierarchyCommandList::__cordl_internal_set_m_IsOwner(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsOwner = value;
}
inline void Unity::Hierarchy::HierarchyCommandList::_ctor(::System::IntPtr nativePtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyCommandList*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nativePtr);
}
inline void Unity::Hierarchy::HierarchyCommandList::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Hierarchy::HierarchyCommandList*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Hierarchy::HierarchyCommandList::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyCommandList*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Hierarchy::HierarchyCommandList::Dispose(bool disposing) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyCommandList*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::Unity::Hierarchy::HierarchyCommandList* Unity::Hierarchy::HierarchyCommandList::FromIntPtr(::System::IntPtr handlePtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyCommandList*>(), { "FromIntPtr", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchyCommandList*>(nullptr, ___internal_method, handlePtr);
}
inline void Unity::Hierarchy::HierarchyCommandList::Destroy(::System::IntPtr nativePtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyCommandList*>(), { "Destroy", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nativePtr);
}
inline ::System::IntPtr Unity::Hierarchy::HierarchyCommandList::CreateCommandList(::System::IntPtr nativePtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyCommandList*>(), { "CreateCommandList", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, nativePtr);
}
inline ::Unity::Hierarchy::HierarchyCommandList* Unity::Hierarchy::HierarchyCommandList::New_ctor(::System::IntPtr nativePtr) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Hierarchy::HierarchyCommandList*>(nativePtr));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Hierarchy::HierarchyCommandList::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Hierarchy::HierarchyCommandList::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyCommandList::HierarchyCommandList() {}
