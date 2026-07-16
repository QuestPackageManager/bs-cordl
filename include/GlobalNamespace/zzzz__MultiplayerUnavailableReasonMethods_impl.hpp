#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerUnavailableReasonMethods.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerUnavailableReasonMethods_def.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationLanguage_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerStatusData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerUnavailableReason_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerUnavailableReasonMethods.LocalizedKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::MultiplayerUnavailableReason)>(&::GlobalNamespace::MultiplayerUnavailableReasonMethods::LocalizedKey)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3739a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerUnavailableReasonMethods*>(),
                                                                                           { "LocalizedKey", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerUnavailableReason>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerUnavailableReasonMethods.ErrorCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::MultiplayerUnavailableReason)>(&::GlobalNamespace::MultiplayerUnavailableReasonMethods::ErrorCode)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3739b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerUnavailableReasonMethods*>(),
                                                                                           { "ErrorCode", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerUnavailableReason>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerUnavailableReasonMethods.TryGetMultiplayerUnavailableReason
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::MultiplayerStatusData*, ::by_ref<::GlobalNamespace::MultiplayerUnavailableReason>)>(
    &::GlobalNamespace::MultiplayerUnavailableReasonMethods::TryGetMultiplayerUnavailableReason)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x3739bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerUnavailableReasonMethods*>(),
                                                { "TryGetMultiplayerUnavailableReason",
                                                  {},
                                                  { ::i2c::type_of<::GlobalNamespace::MultiplayerStatusData*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MultiplayerUnavailableReason>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerUnavailableReasonMethods.GetLocalizedMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::MultiplayerStatusData*, ::BGLib::Polyglot::LocalizationLanguage)>(
    &::GlobalNamespace::MultiplayerUnavailableReasonMethods::GetLocalizedMessage)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3739ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerUnavailableReasonMethods*>(),
                                         { "GetLocalizedMessage", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerStatusData*>(), ::i2c::type_of<::BGLib::Polyglot::LocalizationLanguage>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerUnavailableReasonMethods.VersionLessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW)>(&::GlobalNamespace::MultiplayerUnavailableReasonMethods::VersionLessThan)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x3739d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerUnavailableReasonMethods*>(),
                                                                                           { "VersionLessThan", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MultiplayerUnavailableReasonMethods::setStaticF_kContentVersionRegex(::System::Text::RegularExpressions::Regex* value) {
  ::cordl_internals::setStaticField<::System::Text::RegularExpressions::Regex*, "kContentVersionRegex", ::GlobalNamespace::MultiplayerUnavailableReasonMethods*>(
      std::forward<::System::Text::RegularExpressions::Regex*>(value));
}
inline ::System::Text::RegularExpressions::Regex* GlobalNamespace::MultiplayerUnavailableReasonMethods::getStaticF_kContentVersionRegex() {
  return ::cordl_internals::getStaticField<::System::Text::RegularExpressions::Regex*, "kContentVersionRegex", ::GlobalNamespace::MultiplayerUnavailableReasonMethods*>();
}
inline ::StringW GlobalNamespace::MultiplayerUnavailableReasonMethods::LocalizedKey(::GlobalNamespace::MultiplayerUnavailableReason multiplayerUnavailableReason) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerUnavailableReasonMethods*>(),
                                                                                         { "LocalizedKey", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerUnavailableReason>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, multiplayerUnavailableReason);
}
inline ::StringW GlobalNamespace::MultiplayerUnavailableReasonMethods::ErrorCode(::GlobalNamespace::MultiplayerUnavailableReason multiplayerUnavailableReason) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerUnavailableReasonMethods*>(),
                                                                                         { "ErrorCode", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerUnavailableReason>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, multiplayerUnavailableReason);
}
inline bool GlobalNamespace::MultiplayerUnavailableReasonMethods::TryGetMultiplayerUnavailableReason(::GlobalNamespace::MultiplayerStatusData* data,
                                                                                                     ::by_ref<::GlobalNamespace::MultiplayerUnavailableReason> reason) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MultiplayerUnavailableReasonMethods*>(),
          { "TryGetMultiplayerUnavailableReason", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerStatusData*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MultiplayerUnavailableReason>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, data, reason);
}
inline ::StringW GlobalNamespace::MultiplayerUnavailableReasonMethods::GetLocalizedMessage(::GlobalNamespace::MultiplayerStatusData* data, ::BGLib::Polyglot::LocalizationLanguage language) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerUnavailableReasonMethods*>(),
                                       { "GetLocalizedMessage", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerStatusData*>(), ::i2c::type_of<::BGLib::Polyglot::LocalizationLanguage>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, data, language);
}
inline bool GlobalNamespace::MultiplayerUnavailableReasonMethods::VersionLessThan(::StringW currentVersion, ::StringW minVersion) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerUnavailableReasonMethods*>(),
                                                                                         { "VersionLessThan", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, currentVersion, minVersion);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerUnavailableReasonMethods::MultiplayerUnavailableReasonMethods() {}
