#pragma once
// IWYU pragma private; include "Unity\Properties\Internal\SystemVersionPropertyBag.hpp"
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_impl.hpp"
#include "Unity/Properties/zzzz__Property_2_impl.hpp"
#include "Unity/Properties/Internal/zzzz__SystemVersionPropertyBag_def.hpp"
#include "System/zzzz__Version_def.hpp"
#include "Unity/Properties/Internal/zzzz__SystemVersionPropertyBag_def.hpp"
//  Writing Method size for method: ::Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty::*)()>(
    &::Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6bb4590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty::*)()>(
    &::Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty::get_Name)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6bb47c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty::*)()>(
    &::Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb4804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty::*)(::by_ref<::System::Version*>)>(
    &::Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty::GetValue)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6bb480c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty::*)(::by_ref<::System::Version*>, int32_t)>(
    &::Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty::SetValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bb4824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty*>(), 15 }));
    return ___internal_method;
  }
};
inline void Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty::get_Name() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty::get_IsReadOnly() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty::GetValue(::by_ref<::System::Version*> container) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, container);
}
inline void Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty::SetValue(::by_ref<::System::Version*> container, int32_t value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, value);
}
inline ::Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty* Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty*>());
}
// Ctor Parameters []
constexpr ::Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty::SystemVersionPropertyBag_MajorProperty() {}
//  Writing Method size for method: ::Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty::*)()>(
    &::Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6bb461c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty::*)()>(
    &::Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty::get_Name)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6bb4828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty::*)()>(
    &::Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb486c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty::*)(::by_ref<::System::Version*>)>(
    &::Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty::GetValue)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6bb4874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty::*)(::by_ref<::System::Version*>, int32_t)>(
    &::Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty::SetValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bb488c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty*>(), 15 }));
    return ___internal_method;
  }
};
inline void Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty::get_Name() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty::get_IsReadOnly() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty::GetValue(::by_ref<::System::Version*> container) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, container);
}
inline void Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty::SetValue(::by_ref<::System::Version*> container, int32_t value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, value);
}
inline ::Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty* Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty*>());
}
// Ctor Parameters []
constexpr ::Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty::SystemVersionPropertyBag_MinorProperty() {}
//  Writing Method size for method: ::Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty::*)()>(
    &::Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6bb46a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty::*)()>(
    &::Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty::get_Name)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6bb4890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty::*)()>(
    &::Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb48d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty::*)(::by_ref<::System::Version*>)>(
    &::Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty::GetValue)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6bb48dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty::*)(::by_ref<::System::Version*>, int32_t)>(
    &::Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty::SetValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bb48f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty*>(), 15 }));
    return ___internal_method;
  }
};
inline void Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty::get_Name() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty::get_IsReadOnly() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty::GetValue(::by_ref<::System::Version*> container) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, container);
}
inline void Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty::SetValue(::by_ref<::System::Version*> container, int32_t value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, value);
}
inline ::Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty* Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty*>());
}
// Ctor Parameters []
constexpr ::Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty::SystemVersionPropertyBag_BuildProperty() {}
//  Writing Method size for method: ::Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty::*)()>(
    &::Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6bb4734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty::*)()>(
    &::Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty::get_Name)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6bb48f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty::*)()>(
    &::Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb493c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty::*)(::by_ref<::System::Version*>)>(
    &::Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty::GetValue)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6bb4944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty::*)(::by_ref<::System::Version*>, int32_t)>(
    &::Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty::SetValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bb495c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty*>(), 15 }));
    return ___internal_method;
  }
};
inline void Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty::get_Name() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty::get_IsReadOnly() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty::GetValue(::by_ref<::System::Version*> container) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, container);
}
inline void Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty::SetValue(::by_ref<::System::Version*> container, int32_t value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, value);
}
inline ::Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty* Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty*>());
}
// Ctor Parameters []
constexpr ::Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty::SystemVersionPropertyBag_RevisionProperty() {}
//  Writing Method size for method: ::Unity::Properties::Internal::SystemVersionPropertyBag._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::SystemVersionPropertyBag::*)()>(&::Unity::Properties::Internal::SystemVersionPropertyBag::_ctor)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x6bb3234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Properties::Internal::SystemVersionPropertyBag::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::SystemVersionPropertyBag*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Properties::Internal::SystemVersionPropertyBag* Unity::Properties::Internal::SystemVersionPropertyBag::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::Internal::SystemVersionPropertyBag*>());
}
// Ctor Parameters []
constexpr ::Unity::Properties::Internal::SystemVersionPropertyBag::SystemVersionPropertyBag() {}
