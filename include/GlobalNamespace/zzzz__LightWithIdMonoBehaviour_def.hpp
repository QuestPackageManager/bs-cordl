#pragma once
// IWYU pragma private; include "GlobalNamespace\LightWithIdMonoBehaviour.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
MARK_REF_T(::GlobalNamespace::LightWithIdMonoBehaviour*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightWithIdMonoBehaviour*, "", "LightWithIdMonoBehaviour");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightWithIdMonoBehaviour
class CORDL_TYPE LightWithIdMonoBehaviour : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _ID, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__ID, put = __cordl_internal_set__ID)) int32_t _ID;

  /// @brief Field _elementId, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__elementId, put = __cordl_internal_set__elementId)) int32_t _elementId;

  /// @brief Field _groupId, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__groupId, put = __cordl_internal_set__groupId)) int32_t _groupId;

  /// @brief Field _isRegistered, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__isRegistered, put = __cordl_internal_set__isRegistered)) bool _isRegistered;

  /// @brief Field _lightManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__lightManager, put = __cordl_internal_set__lightManager)) ::UnityW<::GlobalNamespace::LightWithIdManager> _lightManager;

  __declspec(property(get = get_elementId)) int32_t elementId;

  __declspec(property(get = get_groupId)) int32_t groupId;

  __declspec(property(get = get_isRegistered)) bool isRegistered;

  __declspec(property(get = get_lightId)) int32_t lightId;

  /// @brief Convert operator to "::GlobalNamespace::ILightWithId"
  constexpr operator ::GlobalNamespace::ILightWithId*() noexcept;

  /// @brief Method ColorWasSet, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color color);

  static inline ::GlobalNamespace::LightWithIdMonoBehaviour* New_ctor();

  /// @brief Method OnDisable, addr 0x586f224, size 0x88, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x586f194, size 0x4, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method RegisterLight, addr 0x586f198, size 0x88, virtual false, abstract: false, final false
  inline void RegisterLight();

  /// @brief Method SetLightId, addr 0x586f2ac, size 0xb4, virtual false, abstract: false, final false
  inline void SetLightId(int32_t newLightId);

  /// @brief Method Start, addr 0x586f220, size 0x4, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method __SetIsRegistered, addr 0x586f180, size 0xc, virtual true, abstract: false, final true
  inline void __SetIsRegistered();

  /// @brief Method __SetIsUnRegistered, addr 0x586f18c, size 0x8, virtual true, abstract: false, final true
  inline void __SetIsUnRegistered();

  constexpr int32_t const& __cordl_internal_get__ID() const;

  constexpr int32_t& __cordl_internal_get__ID();

  constexpr int32_t const& __cordl_internal_get__elementId() const;

  constexpr int32_t& __cordl_internal_get__elementId();

  constexpr int32_t const& __cordl_internal_get__groupId() const;

  constexpr int32_t& __cordl_internal_get__groupId();

  constexpr bool const& __cordl_internal_get__isRegistered() const;

  constexpr bool& __cordl_internal_get__isRegistered();

  constexpr ::UnityW<::GlobalNamespace::LightWithIdManager> const& __cordl_internal_get__lightManager() const;

  constexpr ::UnityW<::GlobalNamespace::LightWithIdManager>& __cordl_internal_get__lightManager();

  constexpr void __cordl_internal_set__ID(int32_t value);

  constexpr void __cordl_internal_set__elementId(int32_t value);

  constexpr void __cordl_internal_set__groupId(int32_t value);

  constexpr void __cordl_internal_set__isRegistered(bool value);

  constexpr void __cordl_internal_set__lightManager(::UnityW<::GlobalNamespace::LightWithIdManager> value);

  /// @brief Method .ctor, addr 0x586c314, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_elementId, addr 0x586f170, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_elementId();

  /// @brief Method get_groupId, addr 0x586f168, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_groupId();

  /// @brief Method get_isRegistered, addr 0x586f178, size 0x8, virtual true, abstract: false, final true
  inline bool get_isRegistered();

  /// @brief Method get_lightId, addr 0x586f160, size 0x8, virtual true, abstract: false, final true
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19543 };

  /// @brief Field _ID, offset: 0x20, size: 0x4, def value: None
  int32_t ____ID;

  /// @brief Field _groupId, offset: 0x24, size: 0x4, def value: None
  int32_t ____groupId;

  /// @brief Field _elementId, offset: 0x28, size: 0x4, def value: None
  int32_t ____elementId;

  /// @brief Field _lightManager, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LightWithIdManager> ____lightManager;

  /// @brief Field _isRegistered, offset: 0x38, size: 0x1, def value: None
  bool ____isRegistered;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightWithIdMonoBehaviour, ____ID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightWithIdMonoBehaviour, ____groupId) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightWithIdMonoBehaviour, ____elementId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightWithIdMonoBehaviour, ____lightManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightWithIdMonoBehaviour, ____isRegistered) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LightWithIdMonoBehaviour) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
