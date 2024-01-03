#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LightGroupSO)
namespace GlobalNamespace {
class ILightGroup;
}
// Forward declare root types
namespace GlobalNamespace {
class LightGroupSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightGroupSO);
// Type: ::LightGroupSO
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 57, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14511))
// CS Name: ::LightGroupSO*
class CORDL_TYPE LightGroupSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _groupName, offset 0x18, size 0x8
  __declspec(property(get = __get__groupName, put = __set__groupName))::StringW _groupName;

  /// @brief Field _groupDescription, offset 0x20, size 0x8
  __declspec(property(get = __get__groupDescription, put = __set__groupDescription))::StringW _groupDescription;

  /// @brief Field _groupId, offset 0x28, size 0x4
  __declspec(property(get = __get__groupId, put = __set__groupId)) int32_t _groupId;

  /// @brief Field _startLightId, offset 0x2c, size 0x4
  __declspec(property(get = __get__startLightId, put = __set__startLightId)) int32_t _startLightId;

  /// @brief Field _numberOfElements, offset 0x30, size 0x4
  __declspec(property(get = __get__numberOfElements, put = __set__numberOfElements)) int32_t _numberOfElements;

  /// @brief Field _sameIdElements, offset 0x34, size 0x4
  __declspec(property(get = __get__sameIdElements, put = __set__sameIdElements)) int32_t _sameIdElements;

  /// @brief Field _ignoreLightGroupEffectManager, offset 0x38, size 0x1
  __declspec(property(get = __get__ignoreLightGroupEffectManager, put = __set__ignoreLightGroupEffectManager)) bool _ignoreLightGroupEffectManager;

  __declspec(property(get = get_groupName))::StringW groupName;

  __declspec(property(get = get_groupId)) int32_t groupId;

  __declspec(property(get = get_startLightId)) int32_t startLightId;

  __declspec(property(get = get_numberOfElements)) int32_t numberOfElements;

  __declspec(property(get = get_sameIdElements)) int32_t sameIdElements;

  __declspec(property(get = get_ignoreLightGroupEffectManager)) bool ignoreLightGroupEffectManager;

  /// @brief Convert operator to "::GlobalNamespace::ILightGroup"
  constexpr operator ::GlobalNamespace::ILightGroup*() noexcept;

  /// @brief Convert to "::GlobalNamespace::ILightGroup"
  constexpr ::GlobalNamespace::ILightGroup* i___GlobalNamespace__ILightGroup() noexcept;

  constexpr ::StringW& __get__groupName();

  constexpr ::StringW const& __get__groupName() const;

  constexpr void __set__groupName(::StringW value);

  constexpr ::StringW& __get__groupDescription();

  constexpr ::StringW const& __get__groupDescription() const;

  constexpr void __set__groupDescription(::StringW value);

  constexpr int32_t& __get__groupId();

  constexpr int32_t const& __get__groupId() const;

  constexpr void __set__groupId(int32_t value);

  constexpr int32_t& __get__startLightId();

  constexpr int32_t const& __get__startLightId() const;

  constexpr void __set__startLightId(int32_t value);

  constexpr int32_t& __get__numberOfElements();

  constexpr int32_t const& __get__numberOfElements() const;

  constexpr void __set__numberOfElements(int32_t value);

  constexpr int32_t& __get__sameIdElements();

  constexpr int32_t const& __get__sameIdElements() const;

  constexpr void __set__sameIdElements(int32_t value);

  constexpr bool& __get__ignoreLightGroupEffectManager();

  constexpr bool const& __get__ignoreLightGroupEffectManager() const;

  constexpr void __set__ignoreLightGroupEffectManager(bool value);

  /// @brief Method get_groupName, addr 0x210e344, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_groupName();

  /// @brief Method get_groupId, addr 0x210e34c, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_groupId();

  /// @brief Method get_startLightId, addr 0x210e354, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_startLightId();

  /// @brief Method get_numberOfElements, addr 0x210e35c, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_numberOfElements();

  /// @brief Method get_sameIdElements, addr 0x210e364, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_sameIdElements();

  /// @brief Method get_ignoreLightGroupEffectManager, addr 0x210e36c, size 0x8, virtual true, abstract: false, final true
  inline bool get_ignoreLightGroupEffectManager();

  static inline ::GlobalNamespace::LightGroupSO* New_ctor();

  /// @brief Method .ctor, addr 0x210e374, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LightGroupSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightGroupSO(LightGroupSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightGroupSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightGroupSO(LightGroupSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightGroupSO();

public:
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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightGroupSO, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupSO, ____groupName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupSO, ____groupDescription) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupSO, ____groupId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupSO, ____startLightId) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupSO, ____numberOfElements) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupSO, ____sameIdElements) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupSO, ____ignoreLightGroupEffectManager) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightGroupSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightGroupSO*, "", "LightGroupSO");
