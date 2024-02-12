#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PerceivedLoudnessSO)
namespace GlobalNamespace {
class __PerceivedLoudnessSO__PerceivedLevelLoudnessPair;
}
namespace GlobalNamespace {
class __PerceivedLoudnessSO____c__DisplayClass6_0;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PerceivedLoudnessSO;
}
namespace GlobalNamespace {
class __PerceivedLoudnessSO__PerceivedLevelLoudnessPair;
}
namespace GlobalNamespace {
class __PerceivedLoudnessSO____c__DisplayClass6_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PerceivedLoudnessSO);
MARK_REF_PTR_T(::GlobalNamespace::__PerceivedLoudnessSO__PerceivedLevelLoudnessPair);
MARK_REF_PTR_T(::GlobalNamespace::__PerceivedLoudnessSO____c__DisplayClass6_0);
// Type: ::PerceivedLevelLoudnessPair
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10950))
// CS Name: ::PerceivedLoudnessSO::PerceivedLevelLoudnessPair*
class CORDL_TYPE __PerceivedLoudnessSO__PerceivedLevelLoudnessPair : public ::System::Object {
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

  /// @brief Method get_levelId, addr 0x12a21e8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_levelId();

  /// @brief Method get_perceivedLoudness, addr 0x12a21f0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_perceivedLoudness();

  /// @brief Method get_checksum, addr 0x12a21f8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_checksum();

  static inline ::GlobalNamespace::__PerceivedLoudnessSO__PerceivedLevelLoudnessPair* New_ctor(::StringW levelId);

  /// @brief Method .ctor, addr 0x12a2200, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::StringW levelId);

  /// @brief Method SetLoudness, addr 0x12a2274, size 0xc, virtual false, abstract: false, final false
  inline void SetLoudness(float_t newPerceivedLoudness, ::StringW newChecksum);

  // Ctor Parameters [CppParam { name: "", ty: "__PerceivedLoudnessSO__PerceivedLevelLoudnessPair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PerceivedLoudnessSO__PerceivedLevelLoudnessPair(__PerceivedLoudnessSO__PerceivedLevelLoudnessPair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PerceivedLoudnessSO__PerceivedLevelLoudnessPair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PerceivedLoudnessSO__PerceivedLevelLoudnessPair(__PerceivedLoudnessSO__PerceivedLevelLoudnessPair const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PerceivedLoudnessSO__PerceivedLevelLoudnessPair();

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PerceivedLoudnessSO__PerceivedLevelLoudnessPair, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerceivedLoudnessSO__PerceivedLevelLoudnessPair, ____levelId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerceivedLoudnessSO__PerceivedLevelLoudnessPair, ____perceivedLoudness) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerceivedLoudnessSO__PerceivedLevelLoudnessPair, ____checkSum) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass6_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10951))
// CS Name: ::PerceivedLoudnessSO::<>c__DisplayClass6_0*
class CORDL_TYPE __PerceivedLoudnessSO____c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field levelId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_levelId, put = __cordl_internal_set_levelId))::StringW levelId;

  constexpr ::StringW& __cordl_internal_get_levelId();

  constexpr ::StringW const& __cordl_internal_get_levelId() const;

  constexpr void __cordl_internal_set_levelId(::StringW value);

  static inline ::GlobalNamespace::__PerceivedLoudnessSO____c__DisplayClass6_0* New_ctor();

  /// @brief Method .ctor, addr 0x12a2154, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <GetLoudnessData>b__0, addr 0x12a2280, size 0x24, virtual false, abstract: false, final false
  inline bool _GetLoudnessData_b__0(::GlobalNamespace::__PerceivedLoudnessSO__PerceivedLevelLoudnessPair* item);

  // Ctor Parameters [CppParam { name: "", ty: "__PerceivedLoudnessSO____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PerceivedLoudnessSO____c__DisplayClass6_0(__PerceivedLoudnessSO____c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PerceivedLoudnessSO____c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PerceivedLoudnessSO____c__DisplayClass6_0(__PerceivedLoudnessSO____c__DisplayClass6_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PerceivedLoudnessSO____c__DisplayClass6_0();

public:
  /// @brief Field levelId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___levelId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PerceivedLoudnessSO____c__DisplayClass6_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerceivedLoudnessSO____c__DisplayClass6_0, ___levelId) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PerceivedLoudnessSO
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8954))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10952))
// CS Name: ::PerceivedLoudnessSO*
class CORDL_TYPE PerceivedLoudnessSO : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using __c__DisplayClass6_0 = ::GlobalNamespace::__PerceivedLoudnessSO____c__DisplayClass6_0;

  using PerceivedLevelLoudnessPair = ::GlobalNamespace::__PerceivedLoudnessSO__PerceivedLevelLoudnessPair;

  /// @brief Field _perceivedLoudnessPerLevel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__perceivedLoudnessPerLevel,
                      put = __cordl_internal_set__perceivedLoudnessPerLevel))::ArrayW<::GlobalNamespace::__PerceivedLoudnessSO__PerceivedLevelLoudnessPair*,
                                                                                      ::Array<::GlobalNamespace::__PerceivedLoudnessSO__PerceivedLevelLoudnessPair*>*> _perceivedLoudnessPerLevel;

  __declspec(property(get = get_perceivedLoudnessPairs))::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__PerceivedLoudnessSO__PerceivedLevelLoudnessPair*>* perceivedLoudnessPairs;

  constexpr ::ArrayW<::GlobalNamespace::__PerceivedLoudnessSO__PerceivedLevelLoudnessPair*, ::Array<::GlobalNamespace::__PerceivedLoudnessSO__PerceivedLevelLoudnessPair*>*>&
  __cordl_internal_get__perceivedLoudnessPerLevel();

  constexpr ::ArrayW<::GlobalNamespace::__PerceivedLoudnessSO__PerceivedLevelLoudnessPair*, ::Array<::GlobalNamespace::__PerceivedLoudnessSO__PerceivedLevelLoudnessPair*>*> const&
  __cordl_internal_get__perceivedLoudnessPerLevel() const;

  constexpr void __cordl_internal_set__perceivedLoudnessPerLevel(
      ::ArrayW<::GlobalNamespace::__PerceivedLoudnessSO__PerceivedLevelLoudnessPair*, ::Array<::GlobalNamespace::__PerceivedLoudnessSO__PerceivedLevelLoudnessPair*>*> value);

  /// @brief Method get_perceivedLoudnessPairs, addr 0x12a1efc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__PerceivedLoudnessSO__PerceivedLevelLoudnessPair*>* get_perceivedLoudnessPairs();

  /// @brief Method ToDictionary, addr 0x12a1f04, size 0xe0, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PerceivedLoudnessSO__PerceivedLevelLoudnessPair*>* ToDictionary();

  /// @brief Method SetLoudnessData, addr 0x12a1fe4, size 0x5c, virtual false, abstract: false, final false
  inline void SetLoudnessData(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__PerceivedLoudnessSO__PerceivedLevelLoudnessPair*>* loudnessPairs);

  /// @brief Method GetLoudnessData, addr 0x12a2040, size 0x114, virtual false, abstract: false, final false
  inline ::System::Nullable_1<float_t> GetLoudnessData(::StringW levelId);

  static inline ::GlobalNamespace::PerceivedLoudnessSO* New_ctor();

  /// @brief Method .ctor, addr 0x12a215c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PerceivedLoudnessSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PerceivedLoudnessSO(PerceivedLoudnessSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PerceivedLoudnessSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PerceivedLoudnessSO(PerceivedLoudnessSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PerceivedLoudnessSO();

public:
  /// @brief Field _perceivedLoudnessPerLevel, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__PerceivedLoudnessSO__PerceivedLevelLoudnessPair*, ::Array<::GlobalNamespace::__PerceivedLoudnessSO__PerceivedLevelLoudnessPair*>*> ____perceivedLoudnessPerLevel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PerceivedLoudnessSO, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PerceivedLoudnessSO, ____perceivedLoudnessPerLevel) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PerceivedLoudnessSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PerceivedLoudnessSO*, "", "PerceivedLoudnessSO");
NEED_NO_BOX(::GlobalNamespace::__PerceivedLoudnessSO__PerceivedLevelLoudnessPair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PerceivedLoudnessSO__PerceivedLevelLoudnessPair*, "", "PerceivedLoudnessSO/PerceivedLevelLoudnessPair");
NEED_NO_BOX(::GlobalNamespace::__PerceivedLoudnessSO____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PerceivedLoudnessSO____c__DisplayClass6_0*, "", "PerceivedLoudnessSO/<>c__DisplayClass6_0");
