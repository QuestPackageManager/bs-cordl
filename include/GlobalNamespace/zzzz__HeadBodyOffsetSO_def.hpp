#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HeadBodyOffsetSO)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class HeadBodyOffsetSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HeadBodyOffsetSO);
// Type: ::HeadBodyOffsetSO
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10176)), TypeDefinitionIndex(TypeDefinitionIndex(13879))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4090))
// CS Name: ::HeadBodyOffsetSO*
class CORDL_TYPE HeadBodyOffsetSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _headNeckOffset, offset 0x18, size 0xc
  __declspec(property(get = __get__headNeckOffset, put = __set__headNeckOffset))::UnityEngine::Vector3 _headNeckOffset;

  /// @brief Field _verticalOffset, offset 0x24, size 0x4
  __declspec(property(get = __get__verticalOffset, put = __set__verticalOffset)) float_t _verticalOffset;

  __declspec(property(get = get_headNeckOffset))::UnityEngine::Vector3 headNeckOffset;

  __declspec(property(get = get_verticalOffset)) float_t verticalOffset;

  constexpr ::UnityEngine::Vector3& __get__headNeckOffset();

  constexpr ::UnityEngine::Vector3 const& __get__headNeckOffset() const;

  constexpr void __set__headNeckOffset(::UnityEngine::Vector3 value);

  constexpr float_t& __get__verticalOffset();

  constexpr float_t const& __get__verticalOffset() const;

  constexpr void __set__verticalOffset(float_t value);

  /// @brief Method get_headNeckOffset addr 0x20d5a84 size 0xc virtual false final false
  inline ::UnityEngine::Vector3 get_headNeckOffset();

  /// @brief Method get_verticalOffset addr 0x20d5a90 size 0x8 virtual false final false
  inline float_t get_verticalOffset();

  static inline ::GlobalNamespace::HeadBodyOffsetSO* New_ctor();

  /// @brief Method .ctor addr 0x20d5a98 size 0x14 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HeadBodyOffsetSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HeadBodyOffsetSO(HeadBodyOffsetSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HeadBodyOffsetSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HeadBodyOffsetSO(HeadBodyOffsetSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HeadBodyOffsetSO();

public:
  /// @brief Field _headNeckOffset, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____headNeckOffset;

  /// @brief Field _verticalOffset, offset: 0x24, size: 0x4, def value: None
  float_t ____verticalOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HeadBodyOffsetSO, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::HeadBodyOffsetSO, ____headNeckOffset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeadBodyOffsetSO, ____verticalOffset) == 0x24, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HeadBodyOffsetSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HeadBodyOffsetSO*, "", "HeadBodyOffsetSO");
