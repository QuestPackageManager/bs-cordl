#pragma once
// IWYU pragma private; include "GlobalNamespace/TrailElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TrailElement)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class TrailElement;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TrailElement);
// Type: ::TrailElement
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TrailElement*
class CORDL_TYPE TrailElement : public ::System::Object {
public:
  // Declarations
  /// @brief Field distance, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_distance, put = __cordl_internal_set_distance)) float_t distance;

  /// @brief Field localDistance, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_localDistance, put = __cordl_internal_set_localDistance)) float_t localDistance;

  /// @brief Field normal, offset 0x1c, size 0xc
  __declspec(property(get = __cordl_internal_get_normal, put = __cordl_internal_set_normal)) ::UnityEngine::Vector3 normal;

  /// @brief Field position, offset 0x10, size 0xc
  __declspec(property(get = __cordl_internal_get_position, put = __cordl_internal_set_position)) ::UnityEngine::Vector3 position;

  /// @brief Field time, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_time, put = __cordl_internal_set_time)) float_t time;

  /// @brief Method CopyFrom, addr 0x40265e8, size 0x40, virtual false, abstract: false, final false
  inline void CopyFrom(::GlobalNamespace::TrailElement* other);

  static inline ::GlobalNamespace::TrailElement* New_ctor();

  /// @brief Method SetData, addr 0x40265a8, size 0x40, virtual false, abstract: false, final false
  inline void SetData(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, float_t time);

  /// @brief Method SetDistance, addr 0x4026628, size 0x8, virtual false, abstract: false, final false
  inline void SetDistance(float_t value);

  /// @brief Method UpdateLocalDistance, addr 0x4026630, size 0xa8, virtual false, abstract: false, final false
  inline void UpdateLocalDistance(::GlobalNamespace::TrailElement* prev);

  constexpr float_t const& __cordl_internal_get_distance() const;

  constexpr float_t& __cordl_internal_get_distance();

  constexpr float_t const& __cordl_internal_get_localDistance() const;

  constexpr float_t& __cordl_internal_get_localDistance();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_normal() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_normal();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_position() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_position();

  constexpr float_t const& __cordl_internal_get_time() const;

  constexpr float_t& __cordl_internal_get_time();

  constexpr void __cordl_internal_set_distance(float_t value);

  constexpr void __cordl_internal_set_localDistance(float_t value);

  constexpr void __cordl_internal_set_normal(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_position(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_time(float_t value);

  /// @brief Method .ctor, addr 0x40266d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrailElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TrailElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrailElement(TrailElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrailElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrailElement(TrailElement const&) = delete;

  /// @brief Field position, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___position;

  /// @brief Field normal, offset: 0x1c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___normal;

  /// @brief Field distance, offset: 0x28, size: 0x4, def value: None
  float_t ___distance;

  /// @brief Field localDistance, offset: 0x2c, size: 0x4, def value: None
  float_t ___localDistance;

  /// @brief Field time, offset: 0x30, size: 0x4, def value: None
  float_t ___time;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18772 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TrailElement, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TrailElement, ___position) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrailElement, ___normal) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrailElement, ___distance) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrailElement, ___localDistance) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrailElement, ___time) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TrailElement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TrailElement*, "", "TrailElement");
