#pragma once
// IWYU pragma private; include "System\Dynamic\Utils\ContractUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Dynamic/Utils/zzzz__ContractUtils_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Dynamic::Utils::ContractUtils.get_Unreachable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Dynamic::Utils::ContractUtils::get_Unreachable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5fc8f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::ContractUtils*>(), { "get_Unreachable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::ContractUtils.Requires
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::StringW)>(&::System::Dynamic::Utils::ContractUtils::Requires)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5fc898c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::ContractUtils*>(), { "Requires", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::ContractUtils.RequiresNotNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::StringW)>(&::System::Dynamic::Utils::ContractUtils::RequiresNotNull)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5fc6830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::ContractUtils*>(),
                                                                                           { "RequiresNotNull", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::ContractUtils.RequiresNotNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::StringW, int32_t)>(&::System::Dynamic::Utils::ContractUtils::RequiresNotNull)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5fc8f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::ContractUtils*>(),
                                                             { "RequiresNotNull", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::ContractUtils.GetParamName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, int32_t)>(&::System::Dynamic::Utils::ContractUtils::GetParamName)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5fc8fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::ContractUtils*>(), { "GetParamName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline ::System::Exception* System::Dynamic::Utils::ContractUtils::get_Unreachable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::ContractUtils*>(), { "get_Unreachable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline void System::Dynamic::Utils::ContractUtils::Requires(bool precondition, ::StringW paramName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::ContractUtils*>(), { "Requires", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, precondition, paramName);
}
inline void System::Dynamic::Utils::ContractUtils::RequiresNotNull(::System::Object* value, ::StringW paramName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::ContractUtils*>(), { "RequiresNotNull", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, paramName);
}
inline void System::Dynamic::Utils::ContractUtils::RequiresNotNull(::System::Object* value, ::StringW paramName, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::ContractUtils*>(),
                                                           { "RequiresNotNull", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, paramName, index);
}
template <typename T> inline void System::Dynamic::Utils::ContractUtils::RequiresNotNullItems(::System::Collections::Generic::IList_1<T>* array, ::StringW arrayName) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::ContractUtils*>(),
                                              { "RequiresNotNullItems", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IList_1<T>*>(), ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, arrayName);
}
inline ::StringW System::Dynamic::Utils::ContractUtils::GetParamName(::StringW paramName, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::ContractUtils*>(), { "GetParamName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, paramName, index);
}
template <typename T>
inline void System::Dynamic::Utils::ContractUtils::RequiresArrayRange(::System::Collections::Generic::IList_1<T>* array, int32_t offset, int32_t count, ::StringW offsetName, ::StringW countName) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::ContractUtils*>(), { "RequiresArrayRange",
                                                                                                      { ::i2c::class_of<T>() },
                                                                                                      { ::i2c::type_of<::System::Collections::Generic::IList_1<T>*>(), ::i2c::type_of<int32_t>(),
                                                                                                        ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, offset, count, offsetName, countName);
}
// Ctor Parameters []
constexpr ::System::Dynamic::Utils::ContractUtils::ContractUtils() {}
