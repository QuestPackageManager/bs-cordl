#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BasicSpectrogramData)
namespace UnityEngine {
class AudioSource;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BasicSpectrogramData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BasicSpectrogramData);
// Type: ::BasicSpectrogramData
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5103))
// CS Name: ::BasicSpectrogramData*
class CORDL_TYPE BasicSpectrogramData : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _audioSource, offset 0x18, size 0x8
  __declspec(property(get = __get__audioSource, put = __set__audioSource))::UnityEngine::AudioSource* _audioSource;

  /// @brief Field _instantChangeThreshold, offset 0x20, size 0x4
  __declspec(property(get = __get__instantChangeThreshold, put = __set__instantChangeThreshold)) float_t _instantChangeThreshold;

  /// @brief Field _hasData, offset 0x24, size 0x1
  __declspec(property(get = __get__hasData, put = __set__hasData)) bool _hasData;

  /// @brief Field _hasProcessedData, offset 0x25, size 0x1
  __declspec(property(get = __get__hasProcessedData, put = __set__hasProcessedData)) bool _hasProcessedData;

  /// @brief Field _samples, offset 0x28, size 0x8
  __declspec(property(get = __get__samples, put = __set__samples))::ArrayW<float_t, ::Array<float_t>*> _samples;

  /// @brief Field _processedSamples, offset 0x30, size 0x8
  __declspec(property(get = __get__processedSamples, put = __set__processedSamples))::System::Collections::Generic::List_1<float_t>* _processedSamples;

  __declspec(property(get = get_Samples))::ArrayW<float_t, ::Array<float_t>*> Samples;

  __declspec(property(get = get_ProcessedSamples))::System::Collections::Generic::List_1<float_t>* ProcessedSamples;

  constexpr ::UnityEngine::AudioSource*& __get__audioSource();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> const& __get__audioSource() const;

  constexpr void __set__audioSource(::UnityEngine::AudioSource* value);

  constexpr float_t& __get__instantChangeThreshold();

  constexpr float_t const& __get__instantChangeThreshold() const;

  constexpr void __set__instantChangeThreshold(float_t value);

  constexpr bool& __get__hasData();

  constexpr bool const& __get__hasData() const;

  constexpr void __set__hasData(bool value);

  constexpr bool& __get__hasProcessedData();

  constexpr bool const& __get__hasProcessedData() const;

  constexpr void __set__hasProcessedData(bool value);

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __get__samples();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __get__samples() const;

  constexpr void __set__samples(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr ::System::Collections::Generic::List_1<float_t>*& __get__processedSamples();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<float_t>*> const& __get__processedSamples() const;

  constexpr void __set__processedSamples(::System::Collections::Generic::List_1<float_t>* value);

  /// @brief Method get_Samples addr 0x227db10 size 0x98 virtual false final false
  inline ::ArrayW<float_t, ::Array<float_t>*> get_Samples();

  /// @brief Method get_ProcessedSamples addr 0x227dba8 size 0x3c virtual false final false
  inline ::System::Collections::Generic::List_1<float_t>* get_ProcessedSamples();

  /// @brief Method Awake addr 0x227dd74 size 0xb0 virtual false final false
  inline void Awake();

  /// @brief Method LateUpdate addr 0x227de24 size 0x8 virtual false final false
  inline void LateUpdate();

  /// @brief Method ProcessSamples addr 0x227dbe4 size 0x190 virtual false final false
  inline void ProcessSamples(::ArrayW<float_t, ::Array<float_t>*> sourceSamples, ::System::Collections::Generic::List_1<float_t>* processedSamples);

  static inline ::GlobalNamespace::BasicSpectrogramData* New_ctor();

  /// @brief Method .ctor addr 0x227de2c size 0xb8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BasicSpectrogramData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicSpectrogramData(BasicSpectrogramData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicSpectrogramData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicSpectrogramData(BasicSpectrogramData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicSpectrogramData();

public:
  /// @brief Field _audioSource, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::AudioSource* ____audioSource;

  /// @brief Field _instantChangeThreshold, offset: 0x20, size: 0x4, def value: None
  float_t ____instantChangeThreshold;

  /// @brief Field _hasData, offset: 0x24, size: 0x1, def value: None
  bool ____hasData;

  /// @brief Field _hasProcessedData, offset: 0x25, size: 0x1, def value: None
  bool ____hasProcessedData;

  /// @brief Field _samples, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____samples;

  /// @brief Field _processedSamples, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<float_t>* ____processedSamples;

  /// @brief Field kNumberOfSamples offset 0xffffffff size 0x4
  static constexpr int32_t kNumberOfSamples{ static_cast<int32_t>(0x40) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BasicSpectrogramData, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicSpectrogramData, ____audioSource) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicSpectrogramData, ____instantChangeThreshold) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicSpectrogramData, ____hasData) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicSpectrogramData, ____hasProcessedData) == 0x25, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicSpectrogramData, ____samples) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicSpectrogramData, ____processedSamples) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BasicSpectrogramData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BasicSpectrogramData*, "", "BasicSpectrogramData");
