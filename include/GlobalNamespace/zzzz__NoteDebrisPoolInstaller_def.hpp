#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ScriptableObjectInstaller_def.hpp"
CORDL_MODULE_EXPORT(NoteDebrisPoolInstaller)
namespace GlobalNamespace {
class NoteDebris;
}
namespace GlobalNamespace {
class BoolSO;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteDebrisPoolInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteDebrisPoolInstaller);
// Type: ::NoteDebrisPoolInstaller
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11075))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5492))
// CS Name: ::NoteDebrisPoolInstaller*
class CORDL_TYPE NoteDebrisPoolInstaller : public ::Zenject::ScriptableObjectInstaller {
public:
  // Declarations
  /// @brief Field _normalNoteDebrisHDPrefab, offset 0x20, size 0x8
  __declspec(property(get = __get__normalNoteDebrisHDPrefab, put = __set__normalNoteDebrisHDPrefab))::GlobalNamespace::NoteDebris* _normalNoteDebrisHDPrefab;

  /// @brief Field _normalNoteDebrisLWPrefab, offset 0x28, size 0x8
  __declspec(property(get = __get__normalNoteDebrisLWPrefab, put = __set__normalNoteDebrisLWPrefab))::GlobalNamespace::NoteDebris* _normalNoteDebrisLWPrefab;

  /// @brief Field _burstSliderHeadNoteDebrisHDPrefab, offset 0x30, size 0x8
  __declspec(property(get = __get__burstSliderHeadNoteDebrisHDPrefab, put = __set__burstSliderHeadNoteDebrisHDPrefab))::GlobalNamespace::NoteDebris* _burstSliderHeadNoteDebrisHDPrefab;

  /// @brief Field _burstSliderHeadNoteDebrisLWPrefab, offset 0x38, size 0x8
  __declspec(property(get = __get__burstSliderHeadNoteDebrisLWPrefab, put = __set__burstSliderHeadNoteDebrisLWPrefab))::GlobalNamespace::NoteDebris* _burstSliderHeadNoteDebrisLWPrefab;

  /// @brief Field _burstSliderElementNoteHDPrefab, offset 0x40, size 0x8
  __declspec(property(get = __get__burstSliderElementNoteHDPrefab, put = __set__burstSliderElementNoteHDPrefab))::GlobalNamespace::NoteDebris* _burstSliderElementNoteHDPrefab;

  /// @brief Field _burstSliderElementNoteLWPrefab, offset 0x48, size 0x8
  __declspec(property(get = __get__burstSliderElementNoteLWPrefab, put = __set__burstSliderElementNoteLWPrefab))::GlobalNamespace::NoteDebris* _burstSliderElementNoteLWPrefab;

  /// @brief Field _noteDebrisHDConditionVariable, offset 0x50, size 0x8
  __declspec(property(get = __get__noteDebrisHDConditionVariable, put = __set__noteDebrisHDConditionVariable))::GlobalNamespace::BoolSO* _noteDebrisHDConditionVariable;

  constexpr ::GlobalNamespace::NoteDebris*& __get__normalNoteDebrisHDPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteDebris*> const& __get__normalNoteDebrisHDPrefab() const;

  constexpr void __set__normalNoteDebrisHDPrefab(::GlobalNamespace::NoteDebris* value);

  constexpr ::GlobalNamespace::NoteDebris*& __get__normalNoteDebrisLWPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteDebris*> const& __get__normalNoteDebrisLWPrefab() const;

  constexpr void __set__normalNoteDebrisLWPrefab(::GlobalNamespace::NoteDebris* value);

  constexpr ::GlobalNamespace::NoteDebris*& __get__burstSliderHeadNoteDebrisHDPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteDebris*> const& __get__burstSliderHeadNoteDebrisHDPrefab() const;

  constexpr void __set__burstSliderHeadNoteDebrisHDPrefab(::GlobalNamespace::NoteDebris* value);

  constexpr ::GlobalNamespace::NoteDebris*& __get__burstSliderHeadNoteDebrisLWPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteDebris*> const& __get__burstSliderHeadNoteDebrisLWPrefab() const;

  constexpr void __set__burstSliderHeadNoteDebrisLWPrefab(::GlobalNamespace::NoteDebris* value);

  constexpr ::GlobalNamespace::NoteDebris*& __get__burstSliderElementNoteHDPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteDebris*> const& __get__burstSliderElementNoteHDPrefab() const;

  constexpr void __set__burstSliderElementNoteHDPrefab(::GlobalNamespace::NoteDebris* value);

  constexpr ::GlobalNamespace::NoteDebris*& __get__burstSliderElementNoteLWPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteDebris*> const& __get__burstSliderElementNoteLWPrefab() const;

  constexpr void __set__burstSliderElementNoteLWPrefab(::GlobalNamespace::NoteDebris* value);

  constexpr ::GlobalNamespace::BoolSO*& __get__noteDebrisHDConditionVariable();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& __get__noteDebrisHDConditionVariable() const;

  constexpr void __set__noteDebrisHDConditionVariable(::GlobalNamespace::BoolSO* value);

  /// @brief Method InstallBindings addr 0x212d828 size 0x234 virtual true final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::NoteDebrisPoolInstaller* New_ctor();

  /// @brief Method .ctor addr 0x212da5c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NoteDebrisPoolInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteDebrisPoolInstaller(NoteDebrisPoolInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteDebrisPoolInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteDebrisPoolInstaller(NoteDebrisPoolInstaller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteDebrisPoolInstaller();

public:
  /// @brief Field _normalNoteDebrisHDPrefab, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::NoteDebris* ____normalNoteDebrisHDPrefab;

  /// @brief Field _normalNoteDebrisLWPrefab, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::NoteDebris* ____normalNoteDebrisLWPrefab;

  /// @brief Field _burstSliderHeadNoteDebrisHDPrefab, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::NoteDebris* ____burstSliderHeadNoteDebrisHDPrefab;

  /// @brief Field _burstSliderHeadNoteDebrisLWPrefab, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::NoteDebris* ____burstSliderHeadNoteDebrisLWPrefab;

  /// @brief Field _burstSliderElementNoteHDPrefab, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::NoteDebris* ____burstSliderElementNoteHDPrefab;

  /// @brief Field _burstSliderElementNoteLWPrefab, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::NoteDebris* ____burstSliderElementNoteLWPrefab;

  /// @brief Field _noteDebrisHDConditionVariable, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::BoolSO* ____noteDebrisHDConditionVariable;

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
