#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteDebrisPoolInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ScriptableObjectInstaller_def.hpp"
CORDL_MODULE_EXPORT(NoteDebrisPoolInstaller)
namespace GlobalNamespace {
class BoolSO;
}
namespace GlobalNamespace {
class NoteDebris;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteDebrisPoolInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteDebrisPoolInstaller);
// Type: ::NoteDebrisPoolInstaller
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NoteDebrisPoolInstaller*
class CORDL_TYPE NoteDebrisPoolInstaller : public ::Zenject::ScriptableObjectInstaller {
public:
  // Declarations
  /// @brief Field _burstSliderElementNoteHDPrefab, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__burstSliderElementNoteHDPrefab, put = __cordl_internal_set__burstSliderElementNoteHDPrefab)) ::UnityW<::GlobalNamespace::NoteDebris>
      _burstSliderElementNoteHDPrefab;

  /// @brief Field _burstSliderElementNoteLWPrefab, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__burstSliderElementNoteLWPrefab, put = __cordl_internal_set__burstSliderElementNoteLWPrefab)) ::UnityW<::GlobalNamespace::NoteDebris>
      _burstSliderElementNoteLWPrefab;

  /// @brief Field _burstSliderHeadNoteDebrisHDPrefab, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__burstSliderHeadNoteDebrisHDPrefab, put = __cordl_internal_set__burstSliderHeadNoteDebrisHDPrefab)) ::UnityW<::GlobalNamespace::NoteDebris>
      _burstSliderHeadNoteDebrisHDPrefab;

  /// @brief Field _burstSliderHeadNoteDebrisLWPrefab, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__burstSliderHeadNoteDebrisLWPrefab, put = __cordl_internal_set__burstSliderHeadNoteDebrisLWPrefab)) ::UnityW<::GlobalNamespace::NoteDebris>
      _burstSliderHeadNoteDebrisLWPrefab;

  /// @brief Field _normalNoteDebrisHDPrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__normalNoteDebrisHDPrefab, put = __cordl_internal_set__normalNoteDebrisHDPrefab)) ::UnityW<::GlobalNamespace::NoteDebris> _normalNoteDebrisHDPrefab;

  /// @brief Field _normalNoteDebrisLWPrefab, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__normalNoteDebrisLWPrefab, put = __cordl_internal_set__normalNoteDebrisLWPrefab)) ::UnityW<::GlobalNamespace::NoteDebris> _normalNoteDebrisLWPrefab;

  /// @brief Field _noteDebrisHDConditionVariable, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__noteDebrisHDConditionVariable, put = __cordl_internal_set__noteDebrisHDConditionVariable)) ::UnityW<::GlobalNamespace::BoolSO>
      _noteDebrisHDConditionVariable;

  /// @brief Method InstallBindings, addr 0x3b7b590, size 0x234, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::NoteDebrisPoolInstaller* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::NoteDebris> const& __cordl_internal_get__burstSliderElementNoteHDPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::NoteDebris>& __cordl_internal_get__burstSliderElementNoteHDPrefab();

  constexpr ::UnityW<::GlobalNamespace::NoteDebris> const& __cordl_internal_get__burstSliderElementNoteLWPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::NoteDebris>& __cordl_internal_get__burstSliderElementNoteLWPrefab();

  constexpr ::UnityW<::GlobalNamespace::NoteDebris> const& __cordl_internal_get__burstSliderHeadNoteDebrisHDPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::NoteDebris>& __cordl_internal_get__burstSliderHeadNoteDebrisHDPrefab();

  constexpr ::UnityW<::GlobalNamespace::NoteDebris> const& __cordl_internal_get__burstSliderHeadNoteDebrisLWPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::NoteDebris>& __cordl_internal_get__burstSliderHeadNoteDebrisLWPrefab();

  constexpr ::UnityW<::GlobalNamespace::NoteDebris> const& __cordl_internal_get__normalNoteDebrisHDPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::NoteDebris>& __cordl_internal_get__normalNoteDebrisHDPrefab();

  constexpr ::UnityW<::GlobalNamespace::NoteDebris> const& __cordl_internal_get__normalNoteDebrisLWPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::NoteDebris>& __cordl_internal_get__normalNoteDebrisLWPrefab();

  constexpr ::UnityW<::GlobalNamespace::BoolSO> const& __cordl_internal_get__noteDebrisHDConditionVariable() const;

  constexpr ::UnityW<::GlobalNamespace::BoolSO>& __cordl_internal_get__noteDebrisHDConditionVariable();

  constexpr void __cordl_internal_set__burstSliderElementNoteHDPrefab(::UnityW<::GlobalNamespace::NoteDebris> value);

  constexpr void __cordl_internal_set__burstSliderElementNoteLWPrefab(::UnityW<::GlobalNamespace::NoteDebris> value);

  constexpr void __cordl_internal_set__burstSliderHeadNoteDebrisHDPrefab(::UnityW<::GlobalNamespace::NoteDebris> value);

  constexpr void __cordl_internal_set__burstSliderHeadNoteDebrisLWPrefab(::UnityW<::GlobalNamespace::NoteDebris> value);

  constexpr void __cordl_internal_set__normalNoteDebrisHDPrefab(::UnityW<::GlobalNamespace::NoteDebris> value);

  constexpr void __cordl_internal_set__normalNoteDebrisLWPrefab(::UnityW<::GlobalNamespace::NoteDebris> value);

  constexpr void __cordl_internal_set__noteDebrisHDConditionVariable(::UnityW<::GlobalNamespace::BoolSO> value);

  /// @brief Method .ctor, addr 0x3b7b7c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteDebrisPoolInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteDebrisPoolInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteDebrisPoolInstaller(NoteDebrisPoolInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteDebrisPoolInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteDebrisPoolInstaller(NoteDebrisPoolInstaller const&) = delete;

  /// @brief Field _normalNoteDebrisHDPrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NoteDebris> ____normalNoteDebrisHDPrefab;

  /// @brief Field _normalNoteDebrisLWPrefab, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NoteDebris> ____normalNoteDebrisLWPrefab;

  /// @brief Field _burstSliderHeadNoteDebrisHDPrefab, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NoteDebris> ____burstSliderHeadNoteDebrisHDPrefab;

  /// @brief Field _burstSliderHeadNoteDebrisLWPrefab, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NoteDebris> ____burstSliderHeadNoteDebrisLWPrefab;

  /// @brief Field _burstSliderElementNoteHDPrefab, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NoteDebris> ____burstSliderElementNoteHDPrefab;

  /// @brief Field _burstSliderElementNoteLWPrefab, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NoteDebris> ____burstSliderElementNoteLWPrefab;

  /// @brief Field _noteDebrisHDConditionVariable, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BoolSO> ____noteDebrisHDConditionVariable;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4710 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteDebrisPoolInstaller, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisPoolInstaller, ____normalNoteDebrisHDPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisPoolInstaller, ____normalNoteDebrisLWPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisPoolInstaller, ____burstSliderHeadNoteDebrisHDPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisPoolInstaller, ____burstSliderHeadNoteDebrisLWPrefab) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisPoolInstaller, ____burstSliderElementNoteHDPrefab) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisPoolInstaller, ____burstSliderElementNoteLWPrefab) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteDebrisPoolInstaller, ____noteDebrisHDConditionVariable) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteDebrisPoolInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteDebrisPoolInstaller*, "", "NoteDebrisPoolInstaller");
