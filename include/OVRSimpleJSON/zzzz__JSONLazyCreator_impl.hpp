#pragma once
// IWYU pragma private; include "OVRSimpleJSON\JSONLazyCreator.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_impl.hpp"
#include "OVRSimpleJSON/zzzz__JSONLazyCreator_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONArray_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONNodeType_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONObject_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONTextMode_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OVRSimpleJSON::JSONLazyCreator.get_Tag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNodeType (::OVRSimpleJSON::JSONLazyCreator::*)()>(&::OVRSimpleJSON::JSONLazyCreator::get_Tag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2aafc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONLazyCreator.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode_Enumerator (::OVRSimpleJSON::JSONLazyCreator::*)()>(&::OVRSimpleJSON::JSONLazyCreator::GetEnumerator)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2ab04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONLazyCreator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONLazyCreator::*)(::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONLazyCreator::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5e27644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), { ".ctor", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONLazyCreator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONLazyCreator::*)(::OVRSimpleJSON::JSONNode*, ::StringW)>(&::OVRSimpleJSON::JSONLazyCreator::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e2870c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), { ".ctor", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONLazyCreator.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONLazyCreator::*)(int32_t)>(&::OVRSimpleJSON::JSONLazyCreator::get_Item)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e2ab18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONLazyCreator.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONLazyCreator::*)(int32_t, ::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONLazyCreator::set_Item)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5e2ab74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONLazyCreator.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONLazyCreator::*)(::StringW)>(&::OVRSimpleJSON::JSONLazyCreator::get_Item)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2ac18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONLazyCreator.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONLazyCreator::*)(::StringW, ::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONLazyCreator::set_Item)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5e2ac84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONLazyCreator.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONLazyCreator::*)(::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONLazyCreator::Add)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5e2ad30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONLazyCreator.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONLazyCreator::*)(::StringW, ::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONLazyCreator::Add)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5e2add4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONLazyCreator.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::OVRSimpleJSON::JSONLazyCreator*, ::System::Object*)>(&::OVRSimpleJSON::JSONLazyCreator::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e2ae80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONLazyCreator*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONLazyCreator.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::OVRSimpleJSON::JSONLazyCreator*, ::System::Object*)>(&::OVRSimpleJSON::JSONLazyCreator::op_Inequality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e2ae90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(),
                                                             { "op_Inequality", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONLazyCreator*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONLazyCreator.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVRSimpleJSON::JSONLazyCreator::*)(::System::Object*)>(&::OVRSimpleJSON::JSONLazyCreator::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e2aea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONLazyCreator.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::OVRSimpleJSON::JSONLazyCreator::*)()>(&::OVRSimpleJSON::JSONLazyCreator::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2aeb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONLazyCreator.get_AsInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::OVRSimpleJSON::JSONLazyCreator::*)()>(&::OVRSimpleJSON::JSONLazyCreator::get_AsInt)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5e2aeb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONLazyCreator.set_AsInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONLazyCreator::*)(int32_t)>(&::OVRSimpleJSON::JSONLazyCreator::set_AsInt)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e2af3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONLazyCreator.get_AsFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::OVRSimpleJSON::JSONLazyCreator::*)()>(&::OVRSimpleJSON::JSONLazyCreator::get_AsFloat)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5e2afc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONLazyCreator.set_AsFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONLazyCreator::*)(float_t)>(&::OVRSimpleJSON::JSONLazyCreator::set_AsFloat)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e2b048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONLazyCreator.get_AsDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::OVRSimpleJSON::JSONLazyCreator::*)()>(&::OVRSimpleJSON::JSONLazyCreator::get_AsDouble)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5e2b0d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONLazyCreator.set_AsDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONLazyCreator::*)(double_t)>(&::OVRSimpleJSON::JSONLazyCreator::set_AsDouble)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e2b154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONLazyCreator.get_AsLong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::OVRSimpleJSON::JSONLazyCreator::*)()>(&::OVRSimpleJSON::JSONLazyCreator::get_AsLong)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5e2b1dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONLazyCreator.set_AsLong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONLazyCreator::*)(int64_t)>(&::OVRSimpleJSON::JSONLazyCreator::set_AsLong)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5e2b300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONLazyCreator.get_AsULong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::OVRSimpleJSON::JSONLazyCreator::*)()>(&::OVRSimpleJSON::JSONLazyCreator::get_AsULong)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5e2b45c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONLazyCreator.set_AsULong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONLazyCreator::*)(uint64_t)>(&::OVRSimpleJSON::JSONLazyCreator::set_AsULong)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5e2b580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONLazyCreator.get_AsBool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVRSimpleJSON::JSONLazyCreator::*)()>(&::OVRSimpleJSON::JSONLazyCreator::get_AsBool)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5e2b6dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONLazyCreator.set_AsBool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONLazyCreator::*)(bool)>(&::OVRSimpleJSON::JSONLazyCreator::set_AsBool)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e2b760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONLazyCreator.get_AsArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONArray* (::OVRSimpleJSON::JSONLazyCreator::*)()>(&::OVRSimpleJSON::JSONLazyCreator::get_AsArray)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e2b7e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONLazyCreator.get_AsObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONObject* (::OVRSimpleJSON::JSONLazyCreator::*)()>(&::OVRSimpleJSON::JSONLazyCreator::get_AsObject)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e2b860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONLazyCreator.WriteToStringBuilder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONLazyCreator::*)(::System::Text::StringBuilder*, int32_t, int32_t, ::OVRSimpleJSON::JSONTextMode)>(
    &::OVRSimpleJSON::JSONLazyCreator::WriteToStringBuilder)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e2b8d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 31 }));
    return ___internal_method;
  }
};
constexpr ::OVRSimpleJSON::JSONNode*& OVRSimpleJSON::JSONLazyCreator::__cordl_internal_get_m_Node() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Node;
}
constexpr ::OVRSimpleJSON::JSONNode* const& OVRSimpleJSON::JSONLazyCreator::__cordl_internal_get_m_Node() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Node;
}
constexpr void OVRSimpleJSON::JSONLazyCreator::__cordl_internal_set_m_Node(::OVRSimpleJSON::JSONNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Node = value;
}
constexpr ::StringW& OVRSimpleJSON::JSONLazyCreator::__cordl_internal_get_m_Key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Key;
}
constexpr ::StringW const& OVRSimpleJSON::JSONLazyCreator::__cordl_internal_get_m_Key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Key;
}
constexpr void OVRSimpleJSON::JSONLazyCreator::__cordl_internal_set_m_Key(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Key = value;
}
inline ::OVRSimpleJSON::JSONNodeType OVRSimpleJSON::JSONLazyCreator::get_Tag() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNodeType>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode_Enumerator OVRSimpleJSON::JSONLazyCreator::GetEnumerator() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode_Enumerator>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONLazyCreator::_ctor(::OVRSimpleJSON::JSONNode* aNode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), { ".ctor", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aNode);
}
inline void OVRSimpleJSON::JSONLazyCreator::_ctor(::OVRSimpleJSON::JSONNode* aNode, ::StringW aKey) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), { ".ctor", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aNode, aKey);
}
template <typename T> inline T OVRSimpleJSON::JSONLazyCreator::Set(T aVal) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), { "Set", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, aVal);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONLazyCreator::get_Item(int32_t aIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(this, ___internal_method, aIndex);
}
inline void OVRSimpleJSON::JSONLazyCreator::set_Item(int32_t aIndex, ::OVRSimpleJSON::JSONNode* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aIndex, value);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONLazyCreator::get_Item(::StringW aKey) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(this, ___internal_method, aKey);
}
inline void OVRSimpleJSON::JSONLazyCreator::set_Item(::StringW aKey, ::OVRSimpleJSON::JSONNode* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aKey, value);
}
inline void OVRSimpleJSON::JSONLazyCreator::Add(::OVRSimpleJSON::JSONNode* aItem) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aItem);
}
inline void OVRSimpleJSON::JSONLazyCreator::Add(::StringW aKey, ::OVRSimpleJSON::JSONNode* aItem) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aKey, aItem);
}
inline bool OVRSimpleJSON::JSONLazyCreator::op_Equality(::OVRSimpleJSON::JSONLazyCreator* a, ::System::Object* b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), { "op_Equality", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONLazyCreator*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool OVRSimpleJSON::JSONLazyCreator::op_Inequality(::OVRSimpleJSON::JSONLazyCreator* a, ::System::Object* b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(),
                                                           { "op_Inequality", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONLazyCreator*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool OVRSimpleJSON::JSONLazyCreator::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t OVRSimpleJSON::JSONLazyCreator::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t OVRSimpleJSON::JSONLazyCreator::get_AsInt() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONLazyCreator::set_AsInt(int32_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t OVRSimpleJSON::JSONLazyCreator::get_AsFloat() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONLazyCreator::set_AsFloat(float_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t OVRSimpleJSON::JSONLazyCreator::get_AsDouble() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONLazyCreator::set_AsDouble(double_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t OVRSimpleJSON::JSONLazyCreator::get_AsLong() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONLazyCreator::set_AsLong(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint64_t OVRSimpleJSON::JSONLazyCreator::get_AsULong() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONLazyCreator::set_AsULong(uint64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool OVRSimpleJSON::JSONLazyCreator::get_AsBool() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONLazyCreator::set_AsBool(bool value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::OVRSimpleJSON::JSONArray* OVRSimpleJSON::JSONLazyCreator::get_AsArray() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONArray*>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONObject* OVRSimpleJSON::JSONLazyCreator::get_AsObject() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONObject*>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONLazyCreator::WriteToStringBuilder(::System::Text::StringBuilder* aSB, int32_t aIndent, int32_t aIndentInc, ::OVRSimpleJSON::JSONTextMode aMode) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONLazyCreator*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aSB, aIndent, aIndentInc, aMode);
}
inline ::OVRSimpleJSON::JSONLazyCreator* OVRSimpleJSON::JSONLazyCreator::New_ctor(::OVRSimpleJSON::JSONNode* aNode) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVRSimpleJSON::JSONLazyCreator*>(aNode));
}
inline ::OVRSimpleJSON::JSONLazyCreator* OVRSimpleJSON::JSONLazyCreator::New_ctor(::OVRSimpleJSON::JSONNode* aNode, ::StringW aKey) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVRSimpleJSON::JSONLazyCreator*>(aNode, aKey));
}
// Ctor Parameters []
constexpr ::OVRSimpleJSON::JSONLazyCreator::JSONLazyCreator() {}
