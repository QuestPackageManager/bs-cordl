#pragma once
// IWYU pragma private; include "GlobalNamespace/LightGroupSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ILightGroup_def.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LightGroupSO)
// Forward declare root types
namespace GlobalNamespace {
class LightGroupSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightGroupSO);
// Dependencies ILightGroup, PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightGroupSO
class CORDL_TYPE LightGroupSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _groupDescription, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__groupDescription, put = __cordl_internal_set__groupDescription)) ::StringW _groupDescription;

  /// @brief Field _groupId, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__groupId, put = __cordl_internal_set__groupId)) int32_t _groupId;

  /// @brief Field _groupName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__groupName, put = __cordl_internal_set__groupName)) ::StringW _groupName;

  /// @brief Field _ignoreLightGroupEffectManager, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__ignoreLightGroupEffectManager, put = __cordl_internal_set__ignoreLightGroupEffectManager)) bool _ignoreLightGroupEffectManager;

  /// @brief Field _numberOfElements, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__numberOfElements, put = __cordl_internal_set__numberOfElements)) int32_t _numberOfElements;

  /// @brief Field _sameIdElements, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__sameIdElements, put = __cordl_internal_set__sameIdElements)) int32_t _sameIdElements;

  /// @brief Field _startLightId, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__startLightId, put = __cordl_internal_set__startLightId)) int32_t _startLightId;

  __declspec(property(get = get_groupId)) int32_t groupId;

  __declspec(property(get = get_groupName)) ::StringW groupName;

  __declspec(property(get = get_ignoreLightGroupEffectManager)) bool ignoreLightGroupEffectManager;

  __declspec(property(get = get_numberOfElements)) int32_t numberOfElements;

  __declspec(property(get = get_sameIdElements)) int32_t sameIdElements;

  __declspec(property(get = get_startLightId)) int32_t startLightId;

  /// @brief Convert operator to "::GlobalNamespace::ILightGroup"
  constexpr operator ::GlobalNamespace::ILightGroup*() noexcept;

  static inline ::GlobalNamespace::LightGroupSO* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__groupDescription() const;

  constexpr ::StringW& __cordl_internal_get__groupDescription();

  constexpr int32_t const& __cordl_internal_get__groupId() const;

  constexpr int32_t& __cordl_internal_get__groupId();

  constexpr ::StringW const& __cordl_internal_get__groupName() const;

  constexpr ::StringW& __cordl_internal_get__groupName();

  constexpr bool const& __cordl_internal_get__ignoreLightGroupEffectManager() const;

  constexpr bool& __cordl_internal_get__ignoreLightGroupEffectManager();

  constexpr int32_t const& __cordl_internal_get__numberOfElements() const;

  constexpr int32_t& __cordl_internal_get__numberOfElements();

  constexpr int32_t const& __cordl_internal_get__sameIdElements() const;

  constexpr int32_t& __cordl_internal_get__sameIdElements();

  constexpr int32_t const& __cordl_internal_get__startLightId() const;

  constexpr int32_t& __cordl_internal_get__startLightId();

  constexpr void __cordl_internal_set__groupDescription(::StringW value);

  constexpr void __cordl_internal_set__groupId(int32_t value);

  constexpr void __cordl_internal_set__groupName(::StringW value);

  constexpr void __cordl_internal_set__ignoreLightGroupEffectManager(bool value);

  constexpr void __cordl_internal_set__numberOfElements(int32_t value);

  constexpr void __cordl_internal_set__sameIdElements(int32_t value);

  constexpr void __cordl_internal_set__startLightId(int32_t value);

  /// @brief Method .ctor, addr 0x39ee9e8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_groupId, addr 0x39ee9c0, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_groupId();

  /// @brief Method get_groupName, addr 0x39ee9b8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_groupName();

  /// @brief Method get_ignoreLightGroupEffectManager, addr 0x39ee9e0, size 0x8, virtual false, abstract: false, final false
  inline bool get_ignoreLightGroupEffectManager();

  /// @brief Method get_numberOfElements, addr 0x39ee9d0, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_numberOfElements();

  /// @brief Method get_sameIdElements, addr 0x39ee9d8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_sameIdElements();

  /// @brief Method get_startLightId, addr 0x39ee9c8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_startLightId();

  /// @brief Convert to "::GlobalNamespace::ILightGroup"
  constexpr ::GlobalNamespace::ILightGroup* i___GlobalNamespace__ILightGroup() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightGroupSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightGroupSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightGroupSO(LightGroupSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightGroupSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightGroupSO(LightGroupSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16299 };

  /// @brief Field _groupName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____groupName;

  /// @brief Field _groupDescription, offset: 0x20, size: 0x8, def value: None
  ::StringW ____groupDescription;

  /// @brief Field _groupId, offset: 0x28, size: 0x4, def value: None
  int32_t ____groupId;

  /// @brief Field _startLightId, offset: 0x2c, size: 0x4, def value: None
  int32_t ____startLightId;

  /// @brief Field _numberOfElements, offset: 0x30, size: 0x4, def value: None
  int32_t ____numberOfElements;

  /// @brief Field _sameIdElements, offset: 0x34, size: 0x4, def value: None
  int32_t ____sameIdElements;

  /// @brief Field _ignoreLightGroupEffectManager, offset: 0x38, size: 0x1, def value: None
  bool ____ignoreLightGroupEffectManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightGroupSO, ____groupName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupSO, ____groupDescription) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupSO, ____groupId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupSO, ____startLightId) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupSO, ____numberOfElements) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupSO, ____sameIdElements) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupSO, ____ignoreLightGroupEffectManager) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightGroupSO, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightGroupSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightGroupSO*, "", "LightGroupSO");
