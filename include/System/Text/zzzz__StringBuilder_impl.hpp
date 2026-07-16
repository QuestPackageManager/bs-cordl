#pragma once
// IWYU pragma private; include "System/Text/StringBuilder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ParamsArray_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::System::Text::StringBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::StringBuilder::*)()>(&::System::Text::StringBuilder::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ad55b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::StringBuilder::*)(int32_t)>(&::System::Text::StringBuilder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ad5614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::StringBuilder::*)(::StringW)>(&::System::Text::StringBuilder::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ad57d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::StringBuilder::*)(::StringW, int32_t)>(&::System::Text::StringBuilder::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ad57f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::StringBuilder::*)(::StringW, int32_t, int32_t, int32_t)>(&::System::Text::StringBuilder::_ctor)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5ad5810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::StringBuilder::*)(int32_t, int32_t)>(&::System::Text::StringBuilder::_ctor)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5ad561c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::StringBuilder::*)(::System::Runtime::Serialization::SerializationInfo*,
                                                                                               ::System::Runtime::Serialization::StreamingContext)>(&::System::Text::StringBuilder::_ctor)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x5ad5b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.System_Runtime_Serialization_ISerializable_GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::System::Text::StringBuilder::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
        &::System::Text::StringBuilder::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5ad5e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(),
                                                { "System.Runtime.Serialization.ISerializable.GetObjectData",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.get_Capacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::StringBuilder::*)()>(&::System::Text::StringBuilder::get_Capacity)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ad5f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "get_Capacity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.set_Capacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::StringBuilder::*)(int32_t)>(&::System::Text::StringBuilder::set_Capacity)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5ad5f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "set_Capacity", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.get_MaxCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::StringBuilder::*)()>(&::System::Text::StringBuilder::get_MaxCapacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ad6120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "get_MaxCapacity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.EnsureCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::StringBuilder::*)(int32_t)>(&::System::Text::StringBuilder::EnsureCapacity)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5ad6128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "EnsureCapacity", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Text::StringBuilder::*)()>(&::System::Text::StringBuilder::ToString)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5ad61dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { ::i2c::class_of<::System::Text::StringBuilder*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Text::StringBuilder::*)(int32_t, int32_t)>(&::System::Text::StringBuilder::ToString)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5ad62f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "ToString", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::System::Text::StringBuilder::*)()>(&::System::Text::StringBuilder::Clear)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ad6644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::StringBuilder::*)()>(&::System::Text::StringBuilder::get_Length)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ad6114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "get_Length", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.set_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::StringBuilder::*)(int32_t)>(&::System::Text::StringBuilder::set_Length)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5ad6660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "set_Length", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.get_Chars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Text::StringBuilder::*)(int32_t)>(&::System::Text::StringBuilder::get_Chars)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5ad69e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "get_Chars", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.set_Chars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::StringBuilder::*)(int32_t, char16_t)>(&::System::Text::StringBuilder::set_Chars)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5ad6a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "set_Chars", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.Append
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::System::Text::StringBuilder::*)(char16_t, int32_t)>(&::System::Text::StringBuilder::Append)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5ad688c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Append", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.Append
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::System::Text::StringBuilder::*)(::ArrayW<char16_t>, int32_t, int32_t)>(
    &::System::Text::StringBuilder::Append)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5ad6cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Append", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.Append
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::System::Text::StringBuilder::*)(::StringW)>(&::System::Text::StringBuilder::Append)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5ad6f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Append", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.AppendHelper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::StringBuilder::*)(::StringW)>(&::System::Text::StringBuilder::AppendHelper)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ad7028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "AppendHelper", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.Append
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::System::Text::StringBuilder::*)(::StringW, int32_t, int32_t)>(&::System::Text::StringBuilder::Append)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5ad7040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Append", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.Append
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::System::Text::StringBuilder::*)(::System::Text::StringBuilder*)>(&::System::Text::StringBuilder::Append)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5ad7154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Append", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.AppendCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::System::Text::StringBuilder::*)(::System::Text::StringBuilder*, int32_t, int32_t)>(
    &::System::Text::StringBuilder::AppendCore)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5ad7178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(),
                                                             { "AppendCore", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.AppendLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::System::Text::StringBuilder::*)()>(&::System::Text::StringBuilder::AppendLine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ad737c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "AppendLine", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.AppendLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::System::Text::StringBuilder::*)(::StringW)>(&::System::Text::StringBuilder::AppendLine)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5ad739c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "AppendLine", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::StringBuilder::*)(int32_t, ::System::Span_1<char16_t>, int32_t)>(&::System::Text::StringBuilder::CopyTo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5ad6484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(),
                                                             { "CopyTo", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.Insert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::System::Text::StringBuilder::*)(int32_t, ::StringW, int32_t)>(&::System::Text::StringBuilder::Insert)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5ad7554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::System::Text::StringBuilder::*)(int32_t, int32_t)>(&::System::Text::StringBuilder::Remove)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5ad7a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Remove", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.Append
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::System::Text::StringBuilder::*)(bool)>(&::System::Text::StringBuilder::Append)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ad7cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Append", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.Append
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::System::Text::StringBuilder::*)(char16_t)>(&::System::Text::StringBuilder::Append)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5ad7d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Append", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.Append
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::System::Text::StringBuilder::*)(uint8_t)>(&::System::Text::StringBuilder::Append)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ad7d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Append", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.Append
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::System::Text::StringBuilder::*)(int32_t)>(&::System::Text::StringBuilder::Append)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ad7ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Append", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.Append
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::System::Text::StringBuilder::*)(int64_t)>(&::System::Text::StringBuilder::Append)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ad7e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Append", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.Append
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::System::Text::StringBuilder::*)(double_t)>(&::System::Text::StringBuilder::Append)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ad7e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Append", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.Append
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::System::Text::StringBuilder::*)(uint32_t)>(&::System::Text::StringBuilder::Append)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ad7ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Append", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.Append
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::System::Text::StringBuilder::*)(::System::Object*)>(&::System::Text::StringBuilder::Append)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ad7f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Append", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.Append
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::System::Text::StringBuilder::*)(::ArrayW<char16_t>)>(&::System::Text::StringBuilder::Append)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ad7f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Append", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.Append
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::System::Text::StringBuilder::*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::Text::StringBuilder::Append)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5ad7fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Append", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.Insert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::System::Text::StringBuilder::*)(int32_t, ::StringW)>(&::System::Text::StringBuilder::Insert)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ad802c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.Insert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::System::Text::StringBuilder::*)(int32_t, char16_t)>(&::System::Text::StringBuilder::Insert)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5ad8198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.Insert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::System::Text::StringBuilder::*)(int32_t, int32_t)>(&::System::Text::StringBuilder::Insert)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5ad81c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.AppendFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::System::Text::StringBuilder::*)(::StringW, ::System::Object*)>(&::System::Text::StringBuilder::AppendFormat)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5ad8200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "AppendFormat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.AppendFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::System::Text::StringBuilder::*)(::StringW, ::System::Object*, ::System::Object*)>(
    &::System::Text::StringBuilder::AppendFormat)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5ad8d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(),
                                                             { "AppendFormat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.AppendFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::System::Text::StringBuilder::*)(::StringW, ::System::Object*, ::System::Object*, ::System::Object*)>(
    &::System::Text::StringBuilder::AppendFormat)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ad8dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(),
                            { "AppendFormat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.AppendFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::System::Text::StringBuilder::*)(::StringW, ::ArrayW<::System::Object*>)>(
    &::System::Text::StringBuilder::AppendFormat)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5ad8e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "AppendFormat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.AppendFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::System::Text::StringBuilder::*)(::System::IFormatProvider*, ::StringW, ::System::Object*)>(
    &::System::Text::StringBuilder::AppendFormat)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5ad8f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(),
                                                { "AppendFormat", {}, { ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.AppendFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::System::Text::StringBuilder::*)(::System::IFormatProvider*, ::StringW, ::System::Object*, ::System::Object*,
                                                                                                                         ::System::Object*)>(&::System::Text::StringBuilder::AppendFormat)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ad8f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "AppendFormat",
                                                                                 {},
                                                                                 { ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(),
                                                                                   ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.FormatError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Text::StringBuilder::FormatError)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5ad8fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "FormatError", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.AppendFormatHelper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::System::Text::StringBuilder::*)(::System::IFormatProvider*, ::StringW, ::System::ParamsArray)>(
    &::System::Text::StringBuilder::AppendFormatHelper)> {
  constexpr static std::size_t size = 0xb48;
  constexpr static std::size_t addrs = 0x5ad8250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(),
                                                { "AppendFormatHelper", {}, { ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::ParamsArray>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.Replace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::System::Text::StringBuilder::*)(::StringW, ::StringW)>(&::System::Text::StringBuilder::Replace)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ad900c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Replace", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.Replace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::System::Text::StringBuilder::*)(::StringW, ::StringW, int32_t, int32_t)>(
    &::System::Text::StringBuilder::Replace)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x5ad901c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(),
                                                             { "Replace", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.Append
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::System::Text::StringBuilder::*)(char16_t*, int32_t)>(&::System::Text::StringBuilder::Append)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5ad6df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Append", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.Insert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::StringBuilder::*)(int32_t, char16_t*, int32_t)>(&::System::Text::StringBuilder::Insert)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5ad80c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.ReplaceAllInChunk
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::StringBuilder::*)(::ArrayW<int32_t>, int32_t, ::System::Text::StringBuilder*, int32_t, ::StringW)>(
    &::System::Text::StringBuilder::ReplaceAllInChunk)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5ad93f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "ReplaceAllInChunk",
                                                                                 {},
                                                                                 { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::StringBuilder*>(),
                                                                                   ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.StartsWith
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::StringBuilder::*)(::System::Text::StringBuilder*, int32_t, int32_t, ::StringW)>(
    &::System::Text::StringBuilder::StartsWith)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5ad931c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(),
                            { "StartsWith", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.ReplaceInPlaceAtChunk
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::StringBuilder::*)(::by_ref<::System::Text::StringBuilder*>, ::by_ref<int32_t>, char16_t*, int32_t)>(
    &::System::Text::StringBuilder::ReplaceInPlaceAtChunk)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5ad7954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "ReplaceInPlaceAtChunk",
                                                                                                     {},
                                                                                                     { ::i2c::type_of<::by_ref<::System::Text::StringBuilder*>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                                                                       ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.ThreadSafeCopy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(char16_t*, ::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Text::StringBuilder::ThreadSafeCopy)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5ad5a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(),
                                         { "ThreadSafeCopy", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.ThreadSafeCopy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<char16_t>, int32_t, ::System::Span_1<char16_t>, int32_t, int32_t)>(&::System::Text::StringBuilder::ThreadSafeCopy)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5ad73c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "ThreadSafeCopy",
                                                                                 {},
                                                                                 { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Span_1<char16_t>>(),
                                                                                   ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.FindChunkForIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::System::Text::StringBuilder::*)(int32_t)>(&::System::Text::StringBuilder::FindChunkForIndex)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ad69bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "FindChunkForIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.get_RemainingCurrentChunk
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Span_1<char16_t> (::System::Text::StringBuilder::*)()>(&::System::Text::StringBuilder::get_RemainingCurrentChunk)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5ad95c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "get_RemainingCurrentChunk", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.Next
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::System::Text::StringBuilder::*)(::System::Text::StringBuilder*)>(&::System::Text::StringBuilder::Next)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5ad9588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Next", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.ExpandByABlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::StringBuilder::*)(int32_t)>(&::System::Text::StringBuilder::ExpandByABlock)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5ad6b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "ExpandByABlock", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::StringBuilder::*)(::System::Text::StringBuilder*)>(&::System::Text::StringBuilder::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ad9638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { ".ctor", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.MakeRoom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::StringBuilder::*)(int32_t, int32_t, ::by_ref<::System::Text::StringBuilder*>, ::by_ref<int32_t>, bool)>(
    &::System::Text::StringBuilder::MakeRoom)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x5ad76b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "MakeRoom",
                                                                                 {},
                                                                                 { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::Text::StringBuilder*>>(),
                                                                                   ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::StringBuilder::*)(int32_t, int32_t, ::System::Text::StringBuilder*)>(&::System::Text::StringBuilder::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5ad9660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::StringBuilder.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::StringBuilder::*)(int32_t, int32_t, ::by_ref<::System::Text::StringBuilder*>, ::by_ref<int32_t>)>(
    &::System::Text::StringBuilder::Remove)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5ad7b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Text::StringBuilder*>(),
                         { "Remove", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::Text::StringBuilder*>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<char16_t>& System::Text::StringBuilder::__cordl_internal_get_m_ChunkChars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChunkChars;
}
constexpr ::ArrayW<char16_t> const& System::Text::StringBuilder::__cordl_internal_get_m_ChunkChars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChunkChars;
}
constexpr void System::Text::StringBuilder::__cordl_internal_set_m_ChunkChars(::ArrayW<char16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ChunkChars = value;
}
constexpr ::System::Text::StringBuilder*& System::Text::StringBuilder::__cordl_internal_get_m_ChunkPrevious() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChunkPrevious;
}
constexpr ::System::Text::StringBuilder* const& System::Text::StringBuilder::__cordl_internal_get_m_ChunkPrevious() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChunkPrevious;
}
constexpr void System::Text::StringBuilder::__cordl_internal_set_m_ChunkPrevious(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ChunkPrevious = value;
}
constexpr int32_t& System::Text::StringBuilder::__cordl_internal_get_m_ChunkLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChunkLength;
}
constexpr int32_t const& System::Text::StringBuilder::__cordl_internal_get_m_ChunkLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChunkLength;
}
constexpr void System::Text::StringBuilder::__cordl_internal_set_m_ChunkLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ChunkLength = value;
}
constexpr int32_t& System::Text::StringBuilder::__cordl_internal_get_m_ChunkOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChunkOffset;
}
constexpr int32_t const& System::Text::StringBuilder::__cordl_internal_get_m_ChunkOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChunkOffset;
}
constexpr void System::Text::StringBuilder::__cordl_internal_set_m_ChunkOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ChunkOffset = value;
}
constexpr int32_t& System::Text::StringBuilder::__cordl_internal_get_m_MaxCapacity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxCapacity;
}
constexpr int32_t const& System::Text::StringBuilder::__cordl_internal_get_m_MaxCapacity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxCapacity;
}
constexpr void System::Text::StringBuilder::__cordl_internal_set_m_MaxCapacity(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxCapacity = value;
}
inline void System::Text::StringBuilder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Text::StringBuilder::_ctor(int32_t capacity) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
inline void System::Text::StringBuilder::_ctor(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Text::StringBuilder::_ctor(::StringW value, int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, capacity);
}
inline void System::Text::StringBuilder::_ctor(::StringW value, int32_t startIndex, int32_t length, int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, startIndex, length, capacity);
}
inline void System::Text::StringBuilder::_ctor(int32_t capacity, int32_t maxCapacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity, maxCapacity);
}
inline void System::Text::StringBuilder::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::Text::StringBuilder::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                  ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(),
                                              { "System.Runtime.Serialization.ISerializable.GetObjectData",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline int32_t System::Text::StringBuilder::get_Capacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "get_Capacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Text::StringBuilder::set_Capacity(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "set_Capacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Text::StringBuilder::get_MaxCapacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "get_MaxCapacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Text::StringBuilder::EnsureCapacity(int32_t capacity) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "EnsureCapacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, capacity);
}
inline ::StringW System::Text::StringBuilder::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::StringBuilder*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Text::StringBuilder::ToString(int32_t startIndex, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "ToString", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, startIndex, length);
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method);
}
inline int32_t System::Text::StringBuilder::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Text::StringBuilder::set_Length(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "set_Length", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline char16_t System::Text::StringBuilder::get_Chars(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "get_Chars", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method, index);
}
inline void System::Text::StringBuilder::set_Chars(int32_t index, char16_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "set_Chars", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::Append(char16_t value, int32_t repeatCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Append", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method, value, repeatCount);
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::Append(::ArrayW<char16_t> value, int32_t startIndex, int32_t charCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Append", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method, value, startIndex, charCount);
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::Append(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Append", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method, value);
}
inline void System::Text::StringBuilder::AppendHelper(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "AppendHelper", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::Append(::StringW value, int32_t startIndex, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Append", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method, value, startIndex, count);
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::Append(::System::Text::StringBuilder* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Append", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method, value);
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::AppendCore(::System::Text::StringBuilder* value, int32_t startIndex, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(),
                                                           { "AppendCore", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method, value, startIndex, count);
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::AppendLine() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "AppendLine", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method);
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::AppendLine(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "AppendLine", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method, value);
}
inline void System::Text::StringBuilder::CopyTo(int32_t sourceIndex, ::System::Span_1<char16_t> destination, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(),
                                                           { "CopyTo", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sourceIndex, destination, count);
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::Insert(int32_t index, ::StringW value, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method, index, value, count);
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::Remove(int32_t startIndex, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Remove", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method, startIndex, length);
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::Append(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Append", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method, value);
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::Append(char16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Append", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method, value);
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::Append(uint8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Append", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method, value);
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::Append(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Append", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method, value);
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::Append(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Append", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method, value);
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::Append(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Append", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method, value);
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::Append(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Append", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method, value);
}
template <typename T> inline ::System::Text::StringBuilder* System::Text::StringBuilder::AppendSpanFormattable(T value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "AppendSpanFormattable", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method, value);
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::Append(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Append", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method, value);
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::Append(::ArrayW<char16_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Append", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method, value);
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::Append(::System::ReadOnlySpan_1<char16_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Append", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method, value);
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::Insert(int32_t index, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method, index, value);
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::Insert(int32_t index, char16_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method, index, value);
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::Insert(int32_t index, int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method, index, value);
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::AppendFormat(::StringW format, ::System::Object* arg0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "AppendFormat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method, format, arg0);
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::AppendFormat(::StringW format, ::System::Object* arg0, ::System::Object* arg1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(),
                                                           { "AppendFormat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method, format, arg0, arg1);
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::AppendFormat(::StringW format, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(),
                          { "AppendFormat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method, format, arg0, arg1, arg2);
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::AppendFormat(::StringW format, ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "AppendFormat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method, format, args);
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::AppendFormat(::System::IFormatProvider* provider, ::StringW format, ::System::Object* arg0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(),
                                              { "AppendFormat", {}, { ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method, provider, format, arg0);
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::AppendFormat(::System::IFormatProvider* provider, ::StringW format, ::System::Object* arg0, ::System::Object* arg1,
                                                                                ::System::Object* arg2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "AppendFormat",
                                                                               {},
                                                                               { ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(),
                                                                                 ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method, provider, format, arg0, arg1, arg2);
}
inline void System::Text::StringBuilder::FormatError() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "FormatError", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::AppendFormatHelper(::System::IFormatProvider* provider, ::StringW format, ::System::ParamsArray args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(),
                                              { "AppendFormatHelper", {}, { ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::ParamsArray>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method, provider, format, args);
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::Replace(::StringW oldValue, ::StringW newValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Replace", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method, oldValue, newValue);
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::Replace(::StringW oldValue, ::StringW newValue, int32_t startIndex, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(),
                                                           { "Replace", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method, oldValue, newValue, startIndex, count);
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::Append(char16_t* value, int32_t valueCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Append", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method, value, valueCount);
}
inline void System::Text::StringBuilder::Insert(int32_t index, char16_t* value, int32_t valueCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value, valueCount);
}
inline void System::Text::StringBuilder::ReplaceAllInChunk(::ArrayW<int32_t> replacements, int32_t replacementsCount, ::System::Text::StringBuilder* sourceChunk, int32_t removeCount,
                                                           ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "ReplaceAllInChunk",
                                                                               {},
                                                                               { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::StringBuilder*>(),
                                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, replacements, replacementsCount, sourceChunk, removeCount, value);
}
inline bool System::Text::StringBuilder::StartsWith(::System::Text::StringBuilder* chunk, int32_t indexInChunk, int32_t count, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(),
                                       { "StartsWith", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, chunk, indexInChunk, count, value);
}
inline void System::Text::StringBuilder::ReplaceInPlaceAtChunk(::by_ref<::System::Text::StringBuilder*> chunk, ::by_ref<int32_t> indexInChunk, char16_t* value, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "ReplaceInPlaceAtChunk",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<::by_ref<::System::Text::StringBuilder*>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                                                                     ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chunk, indexInChunk, value, count);
}
inline void System::Text::StringBuilder::ThreadSafeCopy(char16_t* sourcePtr, ::ArrayW<char16_t> destination, int32_t destinationIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(),
                                              { "ThreadSafeCopy", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sourcePtr, destination, destinationIndex, count);
}
inline void System::Text::StringBuilder::ThreadSafeCopy(::ArrayW<char16_t> source, int32_t sourceIndex, ::System::Span_1<char16_t> destination, int32_t destinationIndex, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "ThreadSafeCopy",
                                                                                            {},
                                                                                            { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(),
                                                                                              ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, sourceIndex, destination, destinationIndex, count);
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::FindChunkForIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "FindChunkForIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method, index);
}
inline ::System::Span_1<char16_t> System::Text::StringBuilder::get_RemainingCurrentChunk() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "get_RemainingCurrentChunk", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Span_1<char16_t>>(this, ___internal_method);
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::Next(::System::Text::StringBuilder* chunk) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "Next", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method, chunk);
}
inline void System::Text::StringBuilder::ExpandByABlock(int32_t minBlockCharCount) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "ExpandByABlock", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, minBlockCharCount);
}
inline void System::Text::StringBuilder::_ctor(::System::Text::StringBuilder* from) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { ".ctor", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from);
}
inline void System::Text::StringBuilder::MakeRoom(int32_t index, int32_t count, ::by_ref<::System::Text::StringBuilder*> chunk, ::by_ref<int32_t> indexInChunk, bool doNotMoveFollowingChars) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(), { "MakeRoom",
                                                                               {},
                                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::Text::StringBuilder*>>(),
                                                                                 ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, count, chunk, indexInChunk, doNotMoveFollowingChars);
}
inline void System::Text::StringBuilder::_ctor(int32_t size, int32_t maxCapacity, ::System::Text::StringBuilder* previousBlock) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::StringBuilder*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size, maxCapacity, previousBlock);
}
inline void System::Text::StringBuilder::Remove(int32_t startIndex, int32_t count, ::by_ref<::System::Text::StringBuilder*> chunk, ::by_ref<int32_t> indexInChunk) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Text::StringBuilder*>(),
                       { "Remove", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::Text::StringBuilder*>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startIndex, count, chunk, indexInChunk);
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::StringBuilder*>());
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::New_ctor(int32_t capacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::StringBuilder*>(capacity));
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::New_ctor(::StringW value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::StringBuilder*>(value));
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::New_ctor(::StringW value, int32_t capacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::StringBuilder*>(value, capacity));
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::New_ctor(::StringW value, int32_t startIndex, int32_t length, int32_t capacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::StringBuilder*>(value, startIndex, length, capacity));
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::New_ctor(int32_t capacity, int32_t maxCapacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::StringBuilder*>(capacity, maxCapacity));
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::StringBuilder*>(info, context));
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::New_ctor(::System::Text::StringBuilder* from) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::StringBuilder*>(from));
}
inline ::System::Text::StringBuilder* System::Text::StringBuilder::New_ctor(int32_t size, int32_t maxCapacity, ::System::Text::StringBuilder* previousBlock) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::StringBuilder*>(size, maxCapacity, previousBlock));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Text::StringBuilder::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Text::StringBuilder::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Text::StringBuilder::StringBuilder() {}
