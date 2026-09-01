#pragma once
// IWYU pragma private; include "GlobalNamespace\MissionNode.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MissionNode_def.hpp"
#include "GlobalNamespace/zzzz__IMissionNode_def.hpp"
#include "GlobalNamespace/zzzz__MissionDataSO_def.hpp"
#include "GlobalNamespace/zzzz__MissionNodeVisualController_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionNode.get_missionData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MissionDataSO> (::GlobalNamespace::MissionNode::*)()>(&::GlobalNamespace::MissionNode::get_missionData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x593bbac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNode*>(), { "get_missionData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNode.get_childNodes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::GlobalNamespace::MissionNode>> (::GlobalNamespace::MissionNode::*)()>(&::GlobalNamespace::MissionNode::get_childNodes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x593bbb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNode*>(), { "get_childNodes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNode.get_missionNodeVisualController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MissionNodeVisualController> (::GlobalNamespace::MissionNode::*)()>(
    &::GlobalNamespace::MissionNode::get_missionNodeVisualController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x593bbbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNode*>(), { "get_missionNodeVisualController", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNode.get_letterPartName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MissionNode::*)()>(&::GlobalNamespace::MissionNode::get_letterPartName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x593bbc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNode*>(), { "get_letterPartName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNode.get_numberPartName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MissionNode::*)()>(&::GlobalNamespace::MissionNode::get_numberPartName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x593bbcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNode*>(), { "get_numberPartName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNode.get_missionId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MissionNode::*)()>(&::GlobalNamespace::MissionNode::get_missionId)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x593a860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNode*>(), { "get_missionId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNode.get_formattedMissionNodeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MissionNode::*)()>(&::GlobalNamespace::MissionNode::get_formattedMissionNodeName)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x593bbd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNode*>(), { "get_formattedMissionNodeName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNode.get_position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::MissionNode::*)()>(&::GlobalNamespace::MissionNode::get_position)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x593af38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNode*>(), { "get_position", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNode.get_radius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MissionNode::*)()>(&::GlobalNamespace::MissionNode::get_radius)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x593bc70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNode*>(), { "get_radius", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionNode::*)()>(&::GlobalNamespace::MissionNode::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x593bc94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNode*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MissionDataSO>& GlobalNamespace::MissionNode::__cordl_internal_get__missionDataSO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionDataSO;
}
constexpr ::UnityW<::GlobalNamespace::MissionDataSO> const& GlobalNamespace::MissionNode::__cordl_internal_get__missionDataSO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionDataSO;
}
constexpr void GlobalNamespace::MissionNode::__cordl_internal_set__missionDataSO(::UnityW<::GlobalNamespace::MissionDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionDataSO = value;
}
constexpr ::StringW& GlobalNamespace::MissionNode::__cordl_internal_get__letterPartName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____letterPartName;
}
constexpr ::StringW const& GlobalNamespace::MissionNode::__cordl_internal_get__letterPartName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____letterPartName;
}
constexpr void GlobalNamespace::MissionNode::__cordl_internal_set__letterPartName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____letterPartName = value;
}
constexpr int32_t& GlobalNamespace::MissionNode::__cordl_internal_get__numberPartName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberPartName;
}
constexpr int32_t const& GlobalNamespace::MissionNode::__cordl_internal_get__numberPartName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberPartName;
}
constexpr void GlobalNamespace::MissionNode::__cordl_internal_set__numberPartName(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numberPartName = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::MissionNode::__cordl_internal_get__rectTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rectTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::MissionNode::__cordl_internal_get__rectTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rectTransform;
}
constexpr void GlobalNamespace::MissionNode::__cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rectTransform = value;
}
constexpr ::UnityW<::GlobalNamespace::MissionNodeVisualController>& GlobalNamespace::MissionNode::__cordl_internal_get__missionNodeVisualController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionNodeVisualController;
}
constexpr ::UnityW<::GlobalNamespace::MissionNodeVisualController> const& GlobalNamespace::MissionNode::__cordl_internal_get__missionNodeVisualController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionNodeVisualController;
}
constexpr void GlobalNamespace::MissionNode::__cordl_internal_set__missionNodeVisualController(::UnityW<::GlobalNamespace::MissionNodeVisualController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionNodeVisualController = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionNode>>& GlobalNamespace::MissionNode::__cordl_internal_get__childNodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____childNodes;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionNode>> const& GlobalNamespace::MissionNode::__cordl_internal_get__childNodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____childNodes;
}
constexpr void GlobalNamespace::MissionNode::__cordl_internal_set__childNodes(::ArrayW<::UnityW<::GlobalNamespace::MissionNode>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____childNodes = value;
}
inline ::UnityW<::GlobalNamespace::MissionDataSO> GlobalNamespace::MissionNode::get_missionData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNode*>(), { "get_missionData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MissionDataSO>>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::GlobalNamespace::MissionNode>> GlobalNamespace::MissionNode::get_childNodes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNode*>(), { "get_childNodes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::GlobalNamespace::MissionNode>>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::MissionNodeVisualController> GlobalNamespace::MissionNode::get_missionNodeVisualController() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNode*>(), { "get_missionNodeVisualController", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MissionNodeVisualController>>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::MissionNode::get_letterPartName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNode*>(), { "get_letterPartName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t GlobalNamespace::MissionNode::get_numberPartName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNode*>(), { "get_numberPartName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::MissionNode::get_missionId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNode*>(), { "get_missionId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::MissionNode::get_formattedMissionNodeName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNode*>(), { "get_formattedMissionNodeName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 GlobalNamespace::MissionNode::get_position() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNode*>(), { "get_position", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline float_t GlobalNamespace::MissionNode::get_radius() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNode*>(), { "get_radius", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::MissionNode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNode*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionNode* GlobalNamespace::MissionNode::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionNode*>());
}
/// @brief Convert operator to "::GlobalNamespace::IMissionNode"
constexpr GlobalNamespace::MissionNode::operator ::GlobalNamespace::IMissionNode*() noexcept {
  return static_cast<::GlobalNamespace::IMissionNode*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IMissionNode"
constexpr ::GlobalNamespace::IMissionNode* GlobalNamespace::MissionNode::i___GlobalNamespace__IMissionNode() noexcept {
  return static_cast<::GlobalNamespace::IMissionNode*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionNode::MissionNode() {}
