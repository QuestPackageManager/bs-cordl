#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HeadBodyOffsetSO)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarSDK {
class HeadBodyOffsetSO;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO);
// Type: BeatSaber.BeatAvatarSDK::HeadBodyOffsetSO
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::BeatAvatarSDK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857)), TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15696))
// CS Name: ::BeatSaber.BeatAvatarSDK::HeadBodyOffsetSO*
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

  /// @brief Method get_headNeckOffset, addr 0xe1c0f8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_headNeckOffset();

  /// @brief Method get_verticalOffset, addr 0xe1c104, size 0x8, virtual false, abstract: false, final false
  inline float_t get_verticalOffset();

  static inline ::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO* New_ctor();

  /// @brief Method .ctor, addr 0xe1c10c, size 0x14, virtual false, abstract: false, final false
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
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO, 0x28>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO, ____headNeckOffset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO, ____verticalOffset) == 0x24, "Offset mismatch!");

} // namespace BeatSaber::BeatAvatarSDK
NEED_NO_BOX(::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO*, "BeatSaber.BeatAvatarSDK", "HeadBodyOffsetSO");
