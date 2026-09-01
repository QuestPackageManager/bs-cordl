#pragma once
// IWYU pragma private; include "Unity\Properties\PropertyPath.hpp"
#include "Unity/Properties/zzzz__PropertyPathPart_impl.hpp"
#include "Unity/Properties/zzzz__PropertyPath_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Properties/zzzz__IProperty_def.hpp"
#include "Unity/Properties/zzzz__PropertyPathPart_def.hpp"
#include "Unity/Properties/zzzz__PropertyPath_def.hpp"
// Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "path", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "state", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Properties::PropertyPath___c__DisplayClass36_0::PropertyPath___c__DisplayClass36_0(int32_t index, int32_t length, ::StringW path, int32_t state) noexcept {
  this->index = index;
  this->length = length;
  this->path = path;
  this->state = state;
}
// Ctor Parameters []
constexpr ::Unity::Properties::PropertyPath___c__DisplayClass36_0::PropertyPath___c__DisplayClass36_0() {}
//  Writing Method size for method: ::Unity::Properties::PropertyPath.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Properties::PropertyPath::*)()>(&::Unity::Properties::PropertyPath::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b9ef1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(), { "get_Length", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PropertyPath.get_IsEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Properties::PropertyPath::*)()>(&::Unity::Properties::PropertyPath::get_IsEmpty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6b9ef24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(), { "get_IsEmpty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PropertyPath.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Properties::PropertyPathPart (::Unity::Properties::PropertyPath::*)(int32_t)>(&::Unity::Properties::PropertyPath::get_Item)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6b9ef34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PropertyPath._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::PropertyPath::*)(::StringW)>(&::Unity::Properties::PropertyPath::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b9f020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PropertyPath._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::PropertyPath::*)(::by_ref<::Unity::Properties::PropertyPathPart>)>(&::Unity::Properties::PropertyPath::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6ba0188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(), { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPathPart>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PropertyPath._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::PropertyPath::*)(::by_ref<::Unity::Properties::PropertyPathPart>, ::by_ref<::Unity::Properties::PropertyPathPart>)>(
    &::Unity::Properties::PropertyPath::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6ba01b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(),
                                         { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPathPart>>(), ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPathPart>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PropertyPath._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::PropertyPath::*)(::by_ref<::Unity::Properties::PropertyPathPart>, ::by_ref<::Unity::Properties::PropertyPathPart>,
                                                                                                   ::by_ref<::Unity::Properties::PropertyPathPart>)>(&::Unity::Properties::PropertyPath::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6ba01dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPathPart>>(), ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPathPart>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPathPart>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PropertyPath._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::PropertyPath::*)(::by_ref<::Unity::Properties::PropertyPathPart>, ::by_ref<::Unity::Properties::PropertyPathPart>,
                                                                                                   ::by_ref<::Unity::Properties::PropertyPathPart>, ::by_ref<::Unity::Properties::PropertyPathPart>)>(
    &::Unity::Properties::PropertyPath::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6ba020c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPathPart>>(), ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPathPart>>(),
                                                    ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPathPart>>(), ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPathPart>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PropertyPath._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::PropertyPath::*)(::System::Collections::Generic::List_1<::Unity::Properties::PropertyPathPart>*)>(
    &::Unity::Properties::PropertyPath::_ctor)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x6ba023c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Properties::PropertyPathPart>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PropertyPath.FromIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Properties::PropertyPath (*)(int32_t)>(&::Unity::Properties::PropertyPath::FromIndex)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6ba0434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(), { "FromIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PropertyPath.Combine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Properties::PropertyPath (*)(::by_ref<::Unity::Properties::PropertyPath>, ::by_ref<::Unity::Properties::PropertyPath>)>(
    &::Unity::Properties::PropertyPath::Combine)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x6ba0488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(),
                                                { "Combine", {}, { ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPath>>(), ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPath>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PropertyPath.AppendPart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Properties::PropertyPath (*)(::by_ref<::Unity::Properties::PropertyPath>, ::by_ref<::Unity::Properties::PropertyPathPart>)>(
    &::Unity::Properties::PropertyPath::AppendPart)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x6ba0908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(),
                                         { "AppendPart", {}, { ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPath>>(), ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPathPart>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PropertyPath.AppendIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Properties::PropertyPath (*)(::by_ref<::Unity::Properties::PropertyPath>, int32_t)>(&::Unity::Properties::PropertyPath::AppendIndex)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6ba0c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(),
                                                             { "AppendIndex", {}, { ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPath>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PropertyPath.AppendProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Properties::PropertyPath (*)(::by_ref<::Unity::Properties::PropertyPath>, ::Unity::Properties::IProperty*)>(
    &::Unity::Properties::PropertyPath::AppendProperty)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x6ba0ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(),
                                                { "AppendProperty", {}, { ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPath>>(), ::i2c::type_of<::Unity::Properties::IProperty*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PropertyPath.Pop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Properties::PropertyPath (*)(::by_ref<::Unity::Properties::PropertyPath>)>(&::Unity::Properties::PropertyPath::Pop)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ba0f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(), { "Pop", {}, { ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPath>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PropertyPath.SubPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Properties::PropertyPath (*)(::by_ref<::Unity::Properties::PropertyPath>, int32_t, int32_t)>(
    &::Unity::Properties::PropertyPath::SubPath)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x6ba0fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(),
                                                { "SubPath", {}, { ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPath>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PropertyPath.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Properties::PropertyPath::*)()>(&::Unity::Properties::PropertyPath::ToString)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x6ba149c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(), { ::i2c::class_of<::Unity::Properties::PropertyPath>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PropertyPath.AppendToBuilder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Properties::PropertyPathPart>, ::System::Text::StringBuilder*)>(
    &::Unity::Properties::PropertyPath::AppendToBuilder)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6ba162c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(),
                                                { "AppendToBuilder", {}, { ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPathPart>>(), ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PropertyPath.GetParts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Properties::PropertyPath>, ::System::Collections::Generic::List_1<::Unity::Properties::PropertyPathPart>*)>(
    &::Unity::Properties::PropertyPath::GetParts)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6ba081c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Properties::PropertyPath>(),
            { "GetParts", {}, { ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPath>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Properties::PropertyPathPart>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PropertyPath.ConstructFromPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Properties::PropertyPath (*)(::StringW)>(&::Unity::Properties::PropertyPath::ConstructFromPath)> {
  constexpr static std::size_t size = 0x10fc;
  constexpr static std::size_t addrs = 0x6b9f08c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(), { "ConstructFromPath", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PropertyPath.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Properties::PropertyPath, ::Unity::Properties::PropertyPath)>(&::Unity::Properties::PropertyPath::op_Equality)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6ba1880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::Unity::Properties::PropertyPath>(), ::i2c::type_of<::Unity::Properties::PropertyPath>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PropertyPath.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Properties::PropertyPath, ::Unity::Properties::PropertyPath)>(&::Unity::Properties::PropertyPath::op_Inequality)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6ba1950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(),
                                                             { "op_Inequality", {}, { ::i2c::type_of<::Unity::Properties::PropertyPath>(), ::i2c::type_of<::Unity::Properties::PropertyPath>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PropertyPath.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Properties::PropertyPath::*)(::Unity::Properties::PropertyPath)>(&::Unity::Properties::PropertyPath::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6ba18b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(), { "Equals", {}, { ::i2c::type_of<::Unity::Properties::PropertyPath>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PropertyPath.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Properties::PropertyPath::*)(::System::Object*)>(&::Unity::Properties::PropertyPath::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6ba19a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(), { ::i2c::class_of<::Unity::Properties::PropertyPath>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PropertyPath.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Properties::PropertyPath::*)()>(&::Unity::Properties::PropertyPath::GetHashCode)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6ba1a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(), { ::i2c::class_of<::Unity::Properties::PropertyPath>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PropertyPath._ConstructFromPath_g__TrimStart_36_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Properties::PropertyPath___c__DisplayClass36_0>)>(
    &::Unity::Properties::PropertyPath::_ConstructFromPath_g__TrimStart_36_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6ba16dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(),
                                                             { "<ConstructFromPath>g__TrimStart|36_0", {}, { ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPath___c__DisplayClass36_0>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PropertyPath._ConstructFromPath_g__ReadNext_36_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Properties::PropertyPath___c__DisplayClass36_0>)>(
    &::Unity::Properties::PropertyPath::_ConstructFromPath_g__ReadNext_36_1)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6ba1738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(),
                                                             { "<ConstructFromPath>g__ReadNext|36_1", {}, { ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPath___c__DisplayClass36_0>>() } })));
    return ___internal_method;
  }
};
inline int32_t Unity::Properties::PropertyPath::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Unity::Properties::PropertyPath::get_IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(), { "get_IsEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::Unity::Properties::PropertyPathPart Unity::Properties::PropertyPath::get_Item(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::PropertyPathPart>(*this, ___internal_method, index);
}
inline void Unity::Properties::PropertyPath::_ctor(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, path);
}
inline void Unity::Properties::PropertyPath::_ctor(::by_ref<::Unity::Properties::PropertyPathPart> part) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(), { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPathPart>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, part);
}
inline void Unity::Properties::PropertyPath::_ctor(::by_ref<::Unity::Properties::PropertyPathPart> part0, ::by_ref<::Unity::Properties::PropertyPathPart> part1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(),
                                       { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPathPart>>(), ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPathPart>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, part0, part1);
}
inline void Unity::Properties::PropertyPath::_ctor(::by_ref<::Unity::Properties::PropertyPathPart> part0, ::by_ref<::Unity::Properties::PropertyPathPart> part1,
                                                   ::by_ref<::Unity::Properties::PropertyPathPart> part2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPathPart>>(), ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPathPart>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPathPart>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, part0, part1, part2);
}
inline void Unity::Properties::PropertyPath::_ctor(::by_ref<::Unity::Properties::PropertyPathPart> part0, ::by_ref<::Unity::Properties::PropertyPathPart> part1,
                                                   ::by_ref<::Unity::Properties::PropertyPathPart> part2, ::by_ref<::Unity::Properties::PropertyPathPart> part3) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPathPart>>(), ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPathPart>>(),
                                                  ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPathPart>>(), ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPathPart>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, part0, part1, part2, part3);
}
inline void Unity::Properties::PropertyPath::_ctor(::System::Collections::Generic::List_1<::Unity::Properties::PropertyPathPart>* parts) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Properties::PropertyPathPart>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, parts);
}
inline ::Unity::Properties::PropertyPath Unity::Properties::PropertyPath::FromIndex(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(), { "FromIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::PropertyPath>(nullptr, ___internal_method, index);
}
inline ::Unity::Properties::PropertyPath Unity::Properties::PropertyPath::Combine(::by_ref<::Unity::Properties::PropertyPath> path, ::by_ref<::Unity::Properties::PropertyPath> pathToAppend) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(),
                                              { "Combine", {}, { ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPath>>(), ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPath>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::PropertyPath>(nullptr, ___internal_method, path, pathToAppend);
}
inline ::Unity::Properties::PropertyPath Unity::Properties::PropertyPath::AppendPart(::by_ref<::Unity::Properties::PropertyPath> path, ::by_ref<::Unity::Properties::PropertyPathPart> part) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(),
                                       { "AppendPart", {}, { ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPath>>(), ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPathPart>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::PropertyPath>(nullptr, ___internal_method, path, part);
}
inline ::Unity::Properties::PropertyPath Unity::Properties::PropertyPath::AppendIndex(::by_ref<::Unity::Properties::PropertyPath> path, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(), { "AppendIndex", {}, { ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPath>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::PropertyPath>(nullptr, ___internal_method, path, index);
}
inline ::Unity::Properties::PropertyPath Unity::Properties::PropertyPath::AppendProperty(::by_ref<::Unity::Properties::PropertyPath> path, ::Unity::Properties::IProperty* property) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(),
                                              { "AppendProperty", {}, { ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPath>>(), ::i2c::type_of<::Unity::Properties::IProperty*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::PropertyPath>(nullptr, ___internal_method, path, property);
}
inline ::Unity::Properties::PropertyPath Unity::Properties::PropertyPath::Pop(::by_ref<::Unity::Properties::PropertyPath> path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(), { "Pop", {}, { ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPath>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::PropertyPath>(nullptr, ___internal_method, path);
}
inline ::Unity::Properties::PropertyPath Unity::Properties::PropertyPath::SubPath(::by_ref<::Unity::Properties::PropertyPath> path, int32_t startIndex, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(),
                                              { "SubPath", {}, { ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPath>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::PropertyPath>(nullptr, ___internal_method, path, startIndex, length);
}
inline ::StringW Unity::Properties::PropertyPath::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::PropertyPath>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Unity::Properties::PropertyPath::AppendToBuilder(::by_ref<::Unity::Properties::PropertyPathPart> part, ::System::Text::StringBuilder* builder) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(),
                                              { "AppendToBuilder", {}, { ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPathPart>>(), ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, part, builder);
}
inline void Unity::Properties::PropertyPath::GetParts(::by_ref<::Unity::Properties::PropertyPath> path, ::System::Collections::Generic::List_1<::Unity::Properties::PropertyPathPart>* parts) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Properties::PropertyPath>(),
          { "GetParts", {}, { ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPath>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Properties::PropertyPathPart>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, parts);
}
inline ::Unity::Properties::PropertyPath Unity::Properties::PropertyPath::ConstructFromPath(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(), { "ConstructFromPath", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::PropertyPath>(nullptr, ___internal_method, path);
}
inline bool Unity::Properties::PropertyPath::op_Equality(::Unity::Properties::PropertyPath lhs, ::Unity::Properties::PropertyPath rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::Unity::Properties::PropertyPath>(), ::i2c::type_of<::Unity::Properties::PropertyPath>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool Unity::Properties::PropertyPath::op_Inequality(::Unity::Properties::PropertyPath lhs, ::Unity::Properties::PropertyPath rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(),
                                                           { "op_Inequality", {}, { ::i2c::type_of<::Unity::Properties::PropertyPath>(), ::i2c::type_of<::Unity::Properties::PropertyPath>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool Unity::Properties::PropertyPath::Equals(::Unity::Properties::PropertyPath other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(), { "Equals", {}, { ::i2c::type_of<::Unity::Properties::PropertyPath>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool Unity::Properties::PropertyPath::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::PropertyPath>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Unity::Properties::PropertyPath::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::PropertyPath>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Unity::Properties::PropertyPath::_ConstructFromPath_g__TrimStart_36_0(::by_ref<::Unity::Properties::PropertyPath___c__DisplayClass36_0> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(),
                                                           { "<ConstructFromPath>g__TrimStart|36_0", {}, { ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPath___c__DisplayClass36_0>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Unity::Properties::PropertyPath::_ConstructFromPath_g__ReadNext_36_1(::by_ref<::Unity::Properties::PropertyPath___c__DisplayClass36_0> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyPath>(),
                                                           { "<ConstructFromPath>g__ReadNext|36_1", {}, { ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPath___c__DisplayClass36_0>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Properties::PropertyPath>"
constexpr Unity::Properties::PropertyPath::operator ::System::IEquatable_1<::Unity::Properties::PropertyPath>*() {
  return static_cast<::System::IEquatable_1<::Unity::Properties::PropertyPath>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Properties::PropertyPath>"
constexpr ::System::IEquatable_1<::Unity::Properties::PropertyPath>* Unity::Properties::PropertyPath::i___System__IEquatable_1___Unity__Properties__PropertyPath_() {
  return static_cast<::System::IEquatable_1<::Unity::Properties::PropertyPath>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Part0", ty: "::Unity::Properties::PropertyPathPart", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Part1", ty:
// "::Unity::Properties::PropertyPathPart", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Part2", ty: "::Unity::Properties::PropertyPathPart", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_Part3", ty: "::Unity::Properties::PropertyPathPart", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AdditionalParts", ty:
// "::ArrayW<::Unity::Properties::PropertyPathPart>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Length_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Properties::PropertyPath::PropertyPath(::Unity::Properties::PropertyPathPart m_Part0, ::Unity::Properties::PropertyPathPart m_Part1, ::Unity::Properties::PropertyPathPart m_Part2,
                                                          ::Unity::Properties::PropertyPathPart m_Part3, ::ArrayW<::Unity::Properties::PropertyPathPart> m_AdditionalParts,
                                                          int32_t _Length_k__BackingField) noexcept {
  this->m_Part0 = m_Part0;
  this->m_Part1 = m_Part1;
  this->m_Part2 = m_Part2;
  this->m_Part3 = m_Part3;
  this->m_AdditionalParts = m_AdditionalParts;
  this->_Length_k__BackingField = _Length_k__BackingField;
}
// Ctor Parameters []
constexpr ::Unity::Properties::PropertyPath::PropertyPath() {}
