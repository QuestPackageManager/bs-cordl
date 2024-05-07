#pragma once
// IWYU pragma private; include "BeatSaber/GameSettings/Controllers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(Controllers)
namespace BGLib::SaveDataCore {
class ISerializableSaveData;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace BeatSaber::GameSettings {
class Controllers;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::GameSettings::Controllers);
// Type: BeatSaber.GameSettings::Controllers
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::GameSettings {
// Is value type: false
// CS Name: ::BeatSaber.GameSettings::Controllers*
class CORDL_TYPE Controllers : public ::System::Object {
public:
  // Declarations
  /// @brief Field <isDirty>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__isDirty_k__BackingField, put = __cordl_internal_set__isDirty_k__BackingField)) bool _isDirty_k__BackingField;

  /// @brief Field _positionOffset, offset 0x14, size 0xc
  __declspec(property(get = __cordl_internal_get__positionOffset, put = __cordl_internal_set__positionOffset))::UnityEngine::Vector3 _positionOffset;

  /// @brief Field _rotationOffset, offset 0x20, size 0xc
  __declspec(property(get = __cordl_internal_get__rotationOffset, put = __cordl_internal_set__rotationOffset))::UnityEngine::Vector3 _rotationOffset;

  __declspec(property(get = get_isDirty, put = set_isDirty)) bool isDirty;

  __declspec(property(get = get_positionOffset, put = set_positionOffset))::UnityEngine::Vector3 positionOffset;

  __declspec(property(get = get_rotationOffset, put = set_rotationOffset))::UnityEngine::Vector3 rotationOffset;

  /// @brief Convert operator to "::BGLib::SaveDataCore::ISerializableSaveData"
  constexpr operator ::BGLib::SaveDataCore::ISerializableSaveData*() noexcept;

  static inline ::BeatSaber::GameSettings::Controllers* New_ctor();

  constexpr bool const& __cordl_internal_get__isDirty_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isDirty_k__BackingField();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__positionOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__positionOffset();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__rotationOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__rotationOffset();

  constexpr void __cordl_internal_set__isDirty_k__BackingField(bool value);

  constexpr void __cordl_internal_set__positionOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__rotationOffset(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x1060588, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isDirty, addr 0x106055c, size 0x8, virtual true, abstract: false, final true
  inline bool get_isDirty();

  /// @brief Method get_positionOffset, addr 0x1060570, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_positionOffset();

  /// @brief Method get_rotationOffset, addr 0x106057c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_rotationOffset();

  /// @brief Convert to "::BGLib::SaveDataCore::ISerializableSaveData"
  constexpr ::BGLib::SaveDataCore::ISerializableSaveData* i___BGLib__SaveDataCore__ISerializableSaveData() noexcept;

  /// @brief Method set_isDirty, addr 0x1060564, size 0xc, virtual true, abstract: false, final true
  inline void set_isDirty(bool value);

  /// @brief Method set_positionOffset, addr 0x10603dc, size 0x14, virtual false, abstract: false, final false
  inline void set_positionOffset(::UnityEngine::Vector3 value);

  /// @brief Method set_rotationOffset, addr 0x10603f0, size 0x14, virtual false, abstract: false, final false
  inline void set_rotationOffset(::UnityEngine::Vector3 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Controllers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Controllers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Controllers(Controllers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Controllers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Controllers(Controllers const&) = delete;

  /// @brief Field <isDirty>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____isDirty_k__BackingField;

  /// @brief Field _positionOffset, offset: 0x14, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____positionOffset;

  /// @brief Field _rotationOffset, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____rotationOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::GameSettings::Controllers, 0x30>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::Controllers, ____isDirty_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::Controllers, ____positionOffset) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::Controllers, ____rotationOffset) == 0x20, "Offset mismatch!");

} // namespace BeatSaber::GameSettings
NEED_NO_BOX(::BeatSaber::GameSettings::Controllers);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::GameSettings::Controllers*, "BeatSaber.GameSettings", "Controllers");
