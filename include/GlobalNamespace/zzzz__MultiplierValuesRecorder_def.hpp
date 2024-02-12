#pragma once
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
struct __MultiplierValuesRecorder__MultiplierValue;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplierValuesRecorder;
}
namespace GlobalNamespace {
struct __MultiplierValuesRecorder__MultiplierValue;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplierValuesRecorder);
MARK_VAL_T(::GlobalNamespace::__MultiplierValuesRecorder__MultiplierValue);
// Type: ::MultiplierValue
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4610))
// CS Name: ::MultiplierValuesRecorder::MultiplierValue
struct CORDL_TYPE __MultiplierValuesRecorder__MultiplierValue {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x23bea3c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t multiplier, float_t time);

  // Ctor Parameters [CppParam { name: "multiplier", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __MultiplierValuesRecorder__MultiplierValue(int32_t multiplier, float_t time) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplierValuesRecorder__MultiplierValue();

  /// @brief Field multiplier, offset: 0x0, size: 0x4, def value: None
  int32_t multiplier;

  /// @brief Field time, offset: 0x4, size: 0x4, def value: None
  float_t time;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplierValuesRecorder__MultiplierValue, 0x8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplierValuesRecorder__MultiplierValue, multiplier) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplierValuesRecorder__MultiplierValue, time) == 0x4, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiplierValuesRecorder
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4611))
// CS Name: ::MultiplierValuesRecorder*
class CORDL_TYPE MultiplierValuesRecorder : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using MultiplierValue = ::GlobalNamespace::__MultiplierValuesRecorder__MultiplierValue;

  /// @brief Field _scoreController, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreController, put = __cordl_internal_set__scoreController))::GlobalNamespace::IScoreController* _scoreController;

  /// @brief Field _audioTimeSyncController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSyncController,
                      put = __cordl_internal_set__audioTimeSyncController))::UnityW<::GlobalNamespace::AudioTimeSyncController> _audioTimeSyncController;

  /// @brief Field _multiplierValues, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplierValues,
                      put = __cordl_internal_set__multiplierValues))::System::Collections::Generic::List_1<::GlobalNamespace::__MultiplierValuesRecorder__MultiplierValue>* _multiplierValues;

  __declspec(property(get = get_multiplierValues))::System::Collections::Generic::List_1<::GlobalNamespace::__MultiplierValuesRecorder__MultiplierValue>* multiplierValues;

  constexpr ::GlobalNamespace::IScoreController*& __cordl_internal_get__scoreController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IScoreController*> const& __cordl_internal_get__scoreController() const;

  constexpr void __cordl_internal_set__scoreController(::GlobalNamespace::IScoreController* value);

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& __cordl_internal_get__audioTimeSyncController();

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& __cordl_internal_get__audioTimeSyncController() const;

  constexpr void __cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__MultiplierValuesRecorder__MultiplierValue>*& __cordl_internal_get__multiplierValues();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__MultiplierValuesRecorder__MultiplierValue>*> const&
  __cordl_internal_get__multiplierValues() const;

  constexpr void __cordl_internal_set__multiplierValues(::System::Collections::Generic::List_1<::GlobalNamespace::__MultiplierValuesRecorder__MultiplierValue>* value);

  /// @brief Method get_multiplierValues, addr 0x23be740, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::__MultiplierValuesRecorder__MultiplierValue>* get_multiplierValues();

  /// @brief Method Start, addr 0x23be748, size 0xf0, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x23be838, size 0x108, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleScoreControllerMultiplierDidChange, addr 0x23be940, size 0xfc, virtual false, abstract: false, final false
  inline void HandleScoreControllerMultiplierDidChange(int32_t multiplier, float_t multiplierProgress);

  static inline ::GlobalNamespace::MultiplierValuesRecorder* New_ctor();

  /// @brief Method .ctor, addr 0x23bea48, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplierValuesRecorder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplierValuesRecorder(MultiplierValuesRecorder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplierValuesRecorder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplierValuesRecorder(MultiplierValuesRecorder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplierValuesRecorder();

public:
  /// @brief Field _scoreController, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IScoreController* ____scoreController;

  /// @brief Field _audioTimeSyncController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioTimeSyncController> ____audioTimeSyncController;

  /// @brief Field _multiplierValues, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__MultiplierValuesRecorder__MultiplierValue>* ____multiplierValues;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplierValuesRecorder, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplierValuesRecorder, ____scoreController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplierValuesRecorder, ____audioTimeSyncController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplierValuesRecorder, ____multiplierValues) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplierValuesRecorder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplierValuesRecorder*, "", "MultiplierValuesRecorder");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplierValuesRecorder__MultiplierValue, "", "MultiplierValuesRecorder/MultiplierValue");
