#pragma once
// IWYU pragma private; include "Oculus\Platform\AvatarEditorOptions.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__AvatarEditorOptions_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::AvatarEditorOptions._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::AvatarEditorOptions::*)()>(&::Oculus::Platform::AvatarEditorOptions::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5db4fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::AvatarEditorOptions*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::AvatarEditorOptions.SetSourceOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::AvatarEditorOptions::*)(::StringW)>(&::Oculus::Platform::AvatarEditorOptions::SetSourceOverride)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5db5094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::AvatarEditorOptions*>(), { "SetSourceOverride", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::AvatarEditorOptions.op_Explicit___System__IntPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Oculus::Platform::AvatarEditorOptions*)>(&::Oculus::Platform::AvatarEditorOptions::op_Explicit___System__IntPtr)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5db51a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::AvatarEditorOptions*>(), { "op_Explicit", {}, { ::i2c::type_of<::Oculus::Platform::AvatarEditorOptions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::AvatarEditorOptions.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::AvatarEditorOptions::*)()>(&::Oculus::Platform::AvatarEditorOptions::Finalize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5db51b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::AvatarEditorOptions*>(), { ::i2c::class_of<::Oculus::Platform::AvatarEditorOptions*>(), 1 }));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& Oculus::Platform::AvatarEditorOptions::__cordl_internal_get_Handle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Handle;
}
constexpr ::System::IntPtr const& Oculus::Platform::AvatarEditorOptions::__cordl_internal_get_Handle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Handle;
}
constexpr void Oculus::Platform::AvatarEditorOptions::__cordl_internal_set_Handle(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Handle = value;
}
inline void Oculus::Platform::AvatarEditorOptions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::AvatarEditorOptions*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Platform::AvatarEditorOptions::SetSourceOverride(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::AvatarEditorOptions*>(), { "SetSourceOverride", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::IntPtr Oculus::Platform::AvatarEditorOptions::op_Explicit___System__IntPtr(::Oculus::Platform::AvatarEditorOptions* options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::AvatarEditorOptions*>(), { "op_Explicit", {}, { ::i2c::type_of<::Oculus::Platform::AvatarEditorOptions*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, options);
}
inline void Oculus::Platform::AvatarEditorOptions::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::AvatarEditorOptions*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Platform::AvatarEditorOptions* Oculus::Platform::AvatarEditorOptions::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::AvatarEditorOptions*>());
}
// Ctor Parameters []
constexpr ::Oculus::Platform::AvatarEditorOptions::AvatarEditorOptions() {}
