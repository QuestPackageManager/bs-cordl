#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplierValuesRecorder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplierValuesRecorder)
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class IScoreController;
}
namespace GlobalNamespace {
struct MultiplierValuesRecorder_MultiplierValue;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplierValuesRecorder;
}
namespace GlobalNamespace {
struct MultiplierValuesRecorder_MultiplierValue;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplierValuesRecorder);
MARK_VAL_T(::GlobalNamespace::MultiplierValuesRecorder_MultiplierValue);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: MultiplierValuesRecorder/MultiplierValue
struct CORDL_TYPE MultiplierValuesRecorder_MultiplierValue {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x3be7858, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t multiplier, float_t time);

  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplierValuesRecorder_MultiplierValue();

  // Ctor Parameters [CppParam { name: "multiplier", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }]
  constexpr MultiplierValuesRecorder_MultiplierValue(int32_t multiplier, float_t time) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4634 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field multiplier, offset: 0x0, size: 0x4, def value: None
  int32_t multiplier;

  /// @brief Field time, offset: 0x4, size: 0x4, def value: None
  float_t time;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplierValuesRecorder_MultiplierValue, multiplier) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplierValuesRecorder_MultiplierValue, time) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplierValuesRecorder_MultiplierValue, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplierValuesRecorder
class CORDL_TYPE MultiplierValuesRecorder : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using MultiplierValue = ::GlobalNamespace::MultiplierValuesRecorder_MultiplierValue;

  /// @brief Field _audioTimeSyncController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSyncController, put = __cordl_internal_set__audioTimeSyncController)) ::UnityW<::GlobalNamespace::AudioTimeSyncController>
      _audioTimeSyncController;

  /// @brief Field _multiplierValues, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplierValues,
                      put = __cordl_internal_set__multiplierValues)) ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplierValuesRecorder_MultiplierValue>* _multiplierValues;

  /// @brief Field _scoreController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreController, put = __cordl_internal_set__scoreController)) ::GlobalNamespace::IScoreController* _scoreController;

  __declspec(property(get = get_multiplierValues)) ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplierValuesRecorder_MultiplierValue>* multiplierValues;

  /// @brief Method HandleScoreControllerMultiplierDidChange, addr 0x3be7760, size 0xf8, virtual false, abstract: false, final false
  inline void HandleScoreControllerMultiplierDidChange(int32_t multiplier, float_t multiplierProgress);

  static inline ::GlobalNamespace::MultiplierValuesRecorder* New_ctor();

  /// @brief Method OnDestroy, addr 0x3be7660, size 0x100, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3be756c, size 0xf4, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& __cordl_internal_get__audioTimeSyncController() const;

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& __cordl_internal_get__audioTimeSyncController();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplierValuesRecorder_MultiplierValue>* const& __cordl_internal_get__multiplierValues() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplierValuesRecorder_MultiplierValue>*& __cordl_internal_get__multiplierValues();

  constexpr ::GlobalNamespace::IScoreController* const& __cordl_internal_get__scoreController() const;

  constexpr ::GlobalNamespace::IScoreController*& __cordl_internal_get__scoreController();

  constexpr void __cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value);

  constexpr void __cordl_internal_set__multiplierValues(::System::Collections::Generic::List_1<::GlobalNamespace::MultiplierValuesRecorder_MultiplierValue>* value);

  constexpr void __cordl_internal_set__scoreController(::GlobalNamespace::IScoreController* value);

  /// @brief Method .ctor, addr 0x3be7864, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_multiplierValues, addr 0x3be7564, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplierValuesRecorder_MultiplierValue>* get_multiplierValues();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplierValuesRecorder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplierValuesRecorder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplierValuesRecorder(MultiplierValuesRecorder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplierValuesRecorder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplierValuesRecorder(MultiplierValuesRecorder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4635 };

  /// @brief Field _scoreController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IScoreController* ____scoreController;

  /// @brief Field _audioTimeSyncController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioTimeSyncController> ____audioTimeSyncController;

  /// @brief Field _multiplierValues, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplierValuesRecorder_MultiplierValue>* ____multiplierValues;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplierValuesRecorder, ____scoreController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplierValuesRecorder, ____audioTimeSyncController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplierValuesRecorder, ____multiplierValues) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplierValuesRecorder, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplierValuesRecorder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplierValuesRecorder*, "", "MultiplierValuesRecorder");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplierValuesRecorder_MultiplierValue, "", "MultiplierValuesRecorder/MultiplierValue");
