#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PerceivedLoudnessPerLevelSO)
namespace GlobalNamespace {
class __PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class PerceivedLoudnessPerLevelSO;
}
namespace GlobalNamespace {
class __PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PerceivedLoudnessPerLevelSO);
MARK_REF_PTR_T(::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair);
// Type: ::PerceivedLevelLoudnessPair
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4527))
// CS Name: ::PerceivedLoudnessPerLevelSO::PerceivedLevelLoudnessPair*
class CORDL_TYPE __PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair : public ::System::Object {
public:
  // Declarations
  /// @brief Field _levelId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__levelId, put = __cordl_internal_set__levelId))::StringW _levelId;

  /// @brief Field _perceivedLoudness, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__perceivedLoudness, put = __cordl_internal_set__perceivedLoudness)) float_t _perceivedLoudness;

  /// @brief Field _checkSum, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__checkSum, put = __cordl_internal_set__checkSum))::StringW _checkSum;

  __declspec(property(get = get_levelId))::StringW levelId;

  __declspec(property(get = get_perceivedLoudness)) float_t perceivedLoudness;

  __declspec(property(get = get_checksum))::StringW checksum;

  constexpr ::StringW& __cordl_internal_get__levelId();

  constexpr ::StringW const& __cordl_internal_get__levelId() const;

  constexpr void __cordl_internal_set__levelId(::StringW value);

  constexpr float_t& __cordl_internal_get__perceivedLoudness();

  constexpr float_t const& __cordl_internal_get__perceivedLoudness() const;

  constexpr void __cordl_internal_set__perceivedLoudness(float_t value);

  constexpr ::StringW& __cordl_internal_get__checkSum();

  constexpr ::StringW const& __cordl_internal_get__checkSum() const;

  constexpr void __cordl_internal_set__checkSum(::StringW value);

  /// @brief Method get_levelId, addr 0x2364828, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_levelId();

  /// @brief Method get_perceivedLoudness, addr 0x2364830, size 0x8, virtual false, abstract: false, final false
  inline float_t get_perceivedLoudness();

  /// @brief Method get_checksum, addr 0x2364838, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_checksum();

  static inline ::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair* New_ctor(::StringW levelId, float_t perceivedLoudness, ::StringW checkSum);

  /// @brief Method .ctor, addr 0x2364840, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::StringW levelId, float_t perceivedLoudness, ::StringW checkSum);

  // Ctor Parameters [CppParam { name: "", ty: "__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair(__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair(__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair();

public:
  /// @brief Field _levelId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____levelId;

  /// @brief Field _perceivedLoudness, offset: 0x18, size: 0x4, def value: None
  float_t ____perceivedLoudness;

  /// @brief Field _checkSum, offset: 0x20, size: 0x8, def value: None
  ::StringW ____checkSum;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair, ____levelId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair, ____perceivedLoudness) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair, ____checkSum) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PerceivedLoudnessPerLevelSO
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10210))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4528))
// CS Name: ::PerceivedLoudnessPerLevelSO*
class CORDL_TYPE PerceivedLoudnessPerLevelSO : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using PerceivedLevelLoudnessPair = ::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair;

  /// @brief Field perceivedLoudnessPerLevel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_perceivedLoudnessPerLevel,
                      put = __cordl_internal_set_perceivedLoudnessPerLevel))::ArrayW<::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair*,
                                                                                     ::Array<::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair*>*> perceivedLoudnessPerLevel;

  constexpr ::ArrayW<::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair*, ::Array<::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair*>*>&
  __cordl_internal_get_perceivedLoudnessPerLevel();

  constexpr ::ArrayW<::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair*, ::Array<::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair*>*> const&
  __cordl_internal_get_perceivedLoudnessPerLevel() const;

  constexpr void __cordl_internal_set_perceivedLoudnessPerLevel(
      ::ArrayW<::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair*, ::Array<::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair*>*> value);

  /// @brief Method ToDictionary, addr 0x23646c8, size 0xe0, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair*>* ToDictionary();

  /// @brief Method SetLoudnessData, addr 0x23647a8, size 0x78, virtual false, abstract: false, final false
  inline void SetLoudnessData(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair*>* loudnessDictionary);

  static inline ::GlobalNamespace::PerceivedLoudnessPerLevelSO* New_ctor();

  /// @brief Method .ctor, addr 0x2364820, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PerceivedLoudnessPerLevelSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PerceivedLoudnessPerLevelSO(PerceivedLoudnessPerLevelSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PerceivedLoudnessPerLevelSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PerceivedLoudnessPerLevelSO(PerceivedLoudnessPerLevelSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PerceivedLoudnessPerLevelSO();

public:
  /// @brief Field perceivedLoudnessPerLevel, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair*, ::Array<::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair*>*>
      ___perceivedLoudnessPerLevel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PerceivedLoudnessPerLevelSO, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PerceivedLoudnessPerLevelSO, ___perceivedLoudnessPerLevel) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PerceivedLoudnessPerLevelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PerceivedLoudnessPerLevelSO*, "", "PerceivedLoudnessPerLevelSO");
NEED_NO_BOX(::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair*, "", "PerceivedLoudnessPerLevelSO/PerceivedLevelLoudnessPair");
