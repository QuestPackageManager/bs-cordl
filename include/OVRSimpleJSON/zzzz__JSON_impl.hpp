#pragma once
// IWYU pragma private; include "OVRSimpleJSON\JSON.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OVRSimpleJSON/zzzz__JSON_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
//  Writing Method size for method: ::OVRSimpleJSON::JSON.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (*)(::StringW)>(&::OVRSimpleJSON::JSON::Parse)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e2b930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSON*>(), { "Parse", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSON::Parse(::StringW aJSON) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSON*>(), { "Parse", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(nullptr, ___internal_method, aJSON);
}
// Ctor Parameters []
constexpr ::OVRSimpleJSON::JSON::JSON() {}
