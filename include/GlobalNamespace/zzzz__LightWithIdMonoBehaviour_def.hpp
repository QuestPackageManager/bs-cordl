#pragma once
// IWYU pragma private; include "GlobalNamespace/LightWithIdMonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LightWithIdMonoBehaviour)
namespace GlobalNamespace {
class ILightWithId;
}
namespace GlobalNamespace {
class LightWithIdManager;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class LightWithIdMonoBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightWithIdMonoBehaviour);
// Type: ::LightWithIdMonoBehaviour
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LightWithIdMonoBehaviour*
class CORDL_TYPE LightWithIdMonoBehaviour : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _ID, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__ID, put = __cordl_internal_set__ID)) int32_t _ID;

  /// @brief Field _isRegistered, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__isRegistered, put = __cordl_internal_set__isRegistered)) bool _isRegistered;

  /// @brief Field _lightManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__lightManager, put = __cordl_internal_set__lightManager)) ::UnityW<::GlobalNamespace::LightWithIdManager> _lightManager;

  __declspec(property(get = get_isRegistered)) bool isRegistered;

  __declspec(property(get = get_lightId)) int32_t lightId;

  /// @brief Convert operator to "::GlobalNamespace::ILightWithId"
  constexpr operator ::GlobalNamespace::ILightWithId*() noexcept;

  /// @brief Method ColorWasSet, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ColorWasSet(::UnityEngine::Color color);

  static inline ::GlobalNamespace::LightWithIdMonoBehaviour* New_ctor();

  /// @brief Method OnDisable, addr 0x398d45c, size 0x84, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x398d3d0, size 0x4, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method RegisterLight, addr 0x398d3d4, size 0x84, virtual false, abstract: false, final false
  inline void RegisterLight();

  /// @brief Method SetLightId, addr 0x398d4e0, size 0xa8, virtual false, abstract: false, final false
  inline void SetLightId(int32_t newLightId);

  /// @brief Method Start, addr 0x398d458, size 0x4, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method __SetIsRegistered, addr 0x398d3bc, size 0xc, virtual true, abstract: false, final true
  inline void __SetIsRegistered();

  /// @brief Method __SetIsUnRegistered, addr 0x398d3c8, size 0x8, virtual true, abstract: false, final true
  inline void __SetIsUnRegistered();

  constexpr int32_t const& __cordl_internal_get__ID() const;

  constexpr int32_t& __cordl_internal_get__ID();

  constexpr bool const& __cordl_internal_get__isRegistered() const;

  constexpr bool& __cordl_internal_get__isRegistered();

  constexpr ::UnityW<::GlobalNamespace::LightWithIdManager> const& __cordl_internal_get__lightManager() const;

  constexpr ::UnityW<::GlobalNamespace::LightWithIdManager>& __cordl_internal_get__lightManager();

  constexpr void __cordl_internal_set__ID(int32_t value);

  constexpr void __cordl_internal_set__isRegistered(bool value);

  constexpr void __cordl_internal_set__lightManager(::UnityW<::GlobalNamespace::LightWithIdManager> value);

  /// @brief Method .ctor, addr 0x398ad9c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isRegistered, addr 0x398d3b4, size 0x8, virtual true, abstract: false, final true
  inline bool get_isRegistered();

  /// @brief Method get_lightId, addr 0x398d3ac, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_lightId();

  /// @brief Convert to "::GlobalNamespace::ILightWithId"
  constexpr ::GlobalNamespace::ILightWithId* i___GlobalNamespace__ILightWithId() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightWithIdMonoBehaviour();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightWithIdMonoBehaviour", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightWithIdMonoBehaviour(LightWithIdMonoBehaviour&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightWithIdMonoBehaviour", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightWithIdMonoBehaviour(LightWithIdMonoBehaviour const&) = delete;

  /// @brief Field _ID, offset: 0x20, size: 0x4, def value: None
  int32_t ____ID;

  /// @brief Field _lightManager, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LightWithIdManager> ____lightManager;

  /// @brief Field _isRegistered, offset: 0x30, size: 0x1, def value: None
  bool ____isRegistered;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16288 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightWithIdMonoBehaviour, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LightWithIdMonoBehaviour, ____ID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightWithIdMonoBehaviour, ____lightManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightWithIdMonoBehaviour, ____isRegistered) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightWithIdMonoBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightWithIdMonoBehaviour*, "", "LightWithIdMonoBehaviour");
