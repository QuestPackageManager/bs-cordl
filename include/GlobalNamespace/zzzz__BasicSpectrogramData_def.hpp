#pragma once
// IWYU pragma private; include "GlobalNamespace/BasicSpectrogramData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BasicSpectrogramData)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class BasicSpectrogramData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BasicSpectrogramData);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BasicSpectrogramData
class CORDL_TYPE BasicSpectrogramData : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_ProcessedSamples)) ::System::Collections::Generic::List_1<float_t>* ProcessedSamples;

  __declspec(property(get = get_Samples)) ::ArrayW<float_t, ::Array<float_t>*> Samples;

  /// @brief Field _audioSource, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__audioSource, put = __cordl_internal_set__audioSource)) ::UnityW<::UnityEngine::AudioSource> _audioSource;

  /// @brief Field _hasData, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get__hasData, put = __cordl_internal_set__hasData)) bool _hasData;

  /// @brief Field _hasProcessedData, offset 0x2d, size 0x1
  __declspec(property(get = __cordl_internal_get__hasProcessedData, put = __cordl_internal_set__hasProcessedData)) bool _hasProcessedData;

  /// @brief Field _instantChangeThreshold, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__instantChangeThreshold, put = __cordl_internal_set__instantChangeThreshold)) float_t _instantChangeThreshold;

  /// @brief Field _processedSamples, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__processedSamples, put = __cordl_internal_set__processedSamples)) ::System::Collections::Generic::List_1<float_t>* _processedSamples;

  /// @brief Field _samples, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__samples, put = __cordl_internal_set__samples)) ::ArrayW<float_t, ::Array<float_t>*> _samples;

  /// @brief Method Awake, addr 0x3b9e9d8, size 0xac, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method LateUpdate, addr 0x3b9ea84, size 0x8, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::BasicSpectrogramData* New_ctor();

  /// @brief Method ProcessSamples, addr 0x3b9e848, size 0x190, virtual false, abstract: false, final false
  inline void ProcessSamples(::ArrayW<float_t, ::Array<float_t>*> sourceSamples, ::System::Collections::Generic::List_1<float_t>* processedSamples);

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__audioSource() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__audioSource();

  constexpr bool const& __cordl_internal_get__hasData() const;

  constexpr bool& __cordl_internal_get__hasData();

  constexpr bool const& __cordl_internal_get__hasProcessedData() const;

  constexpr bool& __cordl_internal_get__hasProcessedData();

  constexpr float_t const& __cordl_internal_get__instantChangeThreshold() const;

  constexpr float_t& __cordl_internal_get__instantChangeThreshold();

  constexpr ::System::Collections::Generic::List_1<float_t>* const& __cordl_internal_get__processedSamples() const;

  constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get__processedSamples();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get__samples() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get__samples();

  constexpr void __cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set__hasData(bool value);

  constexpr void __cordl_internal_set__hasProcessedData(bool value);

  constexpr void __cordl_internal_set__instantChangeThreshold(float_t value);

  constexpr void __cordl_internal_set__processedSamples(::System::Collections::Generic::List_1<float_t>* value);

  constexpr void __cordl_internal_set__samples(::ArrayW<float_t, ::Array<float_t>*> value);

  /// @brief Method .ctor, addr 0x3b9ea8c, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ProcessedSamples, addr 0x3b9e80c, size 0x3c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<float_t>* get_ProcessedSamples();

  /// @brief Method get_Samples, addr 0x3b9e774, size 0x98, virtual false, abstract: false, final false
  inline ::ArrayW<float_t, ::Array<float_t>*> get_Samples();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicSpectrogramData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BasicSpectrogramData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicSpectrogramData(BasicSpectrogramData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicSpectrogramData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicSpectrogramData(BasicSpectrogramData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4374 };

  /// @brief Field kNumberOfSamples offset 0xffffffff size 0x4
  static constexpr int32_t kNumberOfSamples{ static_cast<int32_t>(0x40) };

  /// @brief Field _audioSource, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ____audioSource;

  /// @brief Field _instantChangeThreshold, offset: 0x28, size: 0x4, def value: None
  float_t ____instantChangeThreshold;

  /// @brief Field _hasData, offset: 0x2c, size: 0x1, def value: None
  bool ____hasData;

  /// @brief Field _hasProcessedData, offset: 0x2d, size: 0x1, def value: None
  bool ____hasProcessedData;

  /// @brief Field _samples, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____samples;

  /// @brief Field _processedSamples, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<float_t>* ____processedSamples;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BasicSpectrogramData, ____audioSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicSpectrogramData, ____instantChangeThreshold) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicSpectrogramData, ____hasData) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicSpectrogramData, ____hasProcessedData) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicSpectrogramData, ____samples) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicSpectrogramData, ____processedSamples) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BasicSpectrogramData, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BasicSpectrogramData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BasicSpectrogramData*, "", "BasicSpectrogramData");
