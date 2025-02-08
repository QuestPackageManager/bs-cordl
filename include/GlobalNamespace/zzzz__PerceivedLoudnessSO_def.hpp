#pragma once
// IWYU pragma private; include "GlobalNamespace/PerceivedLoudnessSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PerceivedLoudnessSO)
namespace GlobalNamespace {
class PerceivedLoudnessSO_PerceivedLevelLoudnessPair;
}
namespace GlobalNamespace {
class PerceivedLoudnessSO___c__DisplayClass6_0;
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
class PerceivedLoudnessSO_PerceivedLevelLoudnessPair;
}
namespace GlobalNamespace {
class PerceivedLoudnessSO___c__DisplayClass6_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PerceivedLoudnessSO);
MARK_REF_PTR_T(::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair);
MARK_REF_PTR_T(::GlobalNamespace::PerceivedLoudnessSO___c__DisplayClass6_0);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PerceivedLoudnessSO/PerceivedLevelLoudnessPair
class CORDL_TYPE PerceivedLoudnessSO_PerceivedLevelLoudnessPair : public ::System::Object {
public:
  // Declarations
  /// @brief Field _checkSum, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__checkSum, put = __cordl_internal_set__checkSum)) ::StringW _checkSum;

  /// @brief Field _levelId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__levelId, put = __cordl_internal_set__levelId)) ::StringW _levelId;

  /// @brief Field _perceivedLoudness, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__perceivedLoudness, put = __cordl_internal_set__perceivedLoudness)) float_t _perceivedLoudness;

  __declspec(property(get = get_checksum)) ::StringW checksum;

  __declspec(property(get = get_levelId)) ::StringW levelId;

  __declspec(property(get = get_perceivedLoudness)) float_t perceivedLoudness;

  static inline ::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair* New_ctor(::StringW levelId);

  /// @brief Method SetLoudness, addr 0x26e5024, size 0xc, virtual false, abstract: false, final false
  inline void SetLoudness(float_t newPerceivedLoudness, ::StringW newChecksum);

  constexpr ::StringW const& __cordl_internal_get__checkSum() const;

  constexpr ::StringW& __cordl_internal_get__checkSum();

  constexpr ::StringW const& __cordl_internal_get__levelId() const;

  constexpr ::StringW& __cordl_internal_get__levelId();

  constexpr float_t const& __cordl_internal_get__perceivedLoudness() const;

  constexpr float_t& __cordl_internal_get__perceivedLoudness();

  constexpr void __cordl_internal_set__checkSum(::StringW value);

  constexpr void __cordl_internal_set__levelId(::StringW value);

  constexpr void __cordl_internal_set__perceivedLoudness(float_t value);

  /// @brief Method .ctor, addr 0x26e4fb0, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::StringW levelId);

  /// @brief Method get_checksum, addr 0x26e4fa8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_checksum();

  /// @brief Method get_levelId, addr 0x26e4f98, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_levelId();

  /// @brief Method get_perceivedLoudness, addr 0x26e4fa0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_perceivedLoudness();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PerceivedLoudnessSO_PerceivedLevelLoudnessPair();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PerceivedLoudnessSO_PerceivedLevelLoudnessPair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PerceivedLoudnessSO_PerceivedLevelLoudnessPair(PerceivedLoudnessSO_PerceivedLevelLoudnessPair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PerceivedLoudnessSO_PerceivedLevelLoudnessPair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PerceivedLoudnessSO_PerceivedLevelLoudnessPair(PerceivedLoudnessSO_PerceivedLevelLoudnessPair const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13127 };

  /// @brief Field _levelId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____levelId;

  /// @brief Field _perceivedLoudness, offset: 0x18, size: 0x4, def value: None
  float_t ____perceivedLoudness;

  /// @brief Field _checkSum, offset: 0x20, size: 0x8, def value: None
  ::StringW ____checkSum;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair, ____levelId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair, ____perceivedLoudness) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair, ____checkSum) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PerceivedLoudnessSO/<>c__DisplayClass6_0
class CORDL_TYPE PerceivedLoudnessSO___c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field levelId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_levelId, put = __cordl_internal_set_levelId)) ::StringW levelId;

  static inline ::GlobalNamespace::PerceivedLoudnessSO___c__DisplayClass6_0* New_ctor();

  /// @brief Method <GetLoudnessData>b__0, addr 0x26e5030, size 0x24, virtual false, abstract: false, final false
  inline bool _GetLoudnessData_b__0(::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair* item);

  constexpr ::StringW const& __cordl_internal_get_levelId() const;

  constexpr ::StringW& __cordl_internal_get_levelId();

  constexpr void __cordl_internal_set_levelId(::StringW value);

  /// @brief Method .ctor, addr 0x26e4ef4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PerceivedLoudnessSO___c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PerceivedLoudnessSO___c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PerceivedLoudnessSO___c__DisplayClass6_0(PerceivedLoudnessSO___c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PerceivedLoudnessSO___c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PerceivedLoudnessSO___c__DisplayClass6_0(PerceivedLoudnessSO___c__DisplayClass6_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13128 };

  /// @brief Field levelId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___levelId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PerceivedLoudnessSO___c__DisplayClass6_0, ___levelId) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PerceivedLoudnessSO___c__DisplayClass6_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: PerceivedLoudnessSO
class CORDL_TYPE PerceivedLoudnessSO : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using PerceivedLevelLoudnessPair = ::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair;

  using __c__DisplayClass6_0 = ::GlobalNamespace::PerceivedLoudnessSO___c__DisplayClass6_0;

  /// @brief Field _perceivedLoudnessPerLevel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__perceivedLoudnessPerLevel,
                      put = __cordl_internal_set__perceivedLoudnessPerLevel)) ::ArrayW<::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair*,
                                                                                       ::Array<::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair*>*>
      _perceivedLoudnessPerLevel;

  __declspec(property(get = get_perceivedLoudnessPairs)) ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair*>* perceivedLoudnessPairs;

  /// @brief Method GetLoudnessData, addr 0x26e4de4, size 0x110, virtual false, abstract: false, final false
  inline ::System::Nullable_1<float_t> GetLoudnessData(::StringW levelId);

  static inline ::GlobalNamespace::PerceivedLoudnessSO* New_ctor();

  /// @brief Method SetLoudnessData, addr 0x26e4d88, size 0x5c, virtual false, abstract: false, final false
  inline void SetLoudnessData(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair*>* loudnessPairs);

  /// @brief Method ToDictionary, addr 0x26e4ca8, size 0xe0, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair*>* ToDictionary();

  constexpr ::ArrayW<::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair*, ::Array<::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair*>*> const&
  __cordl_internal_get__perceivedLoudnessPerLevel() const;

  constexpr ::ArrayW<::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair*, ::Array<::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair*>*>&
  __cordl_internal_get__perceivedLoudnessPerLevel();

  constexpr void __cordl_internal_set__perceivedLoudnessPerLevel(
      ::ArrayW<::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair*, ::Array<::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair*>*> value);

  /// @brief Method .ctor, addr 0x26e4efc, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_perceivedLoudnessPairs, addr 0x26e4ca0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair*>* get_perceivedLoudnessPairs();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PerceivedLoudnessSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PerceivedLoudnessSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PerceivedLoudnessSO(PerceivedLoudnessSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PerceivedLoudnessSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PerceivedLoudnessSO(PerceivedLoudnessSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13129 };

  /// @brief Field _perceivedLoudnessPerLevel, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair*, ::Array<::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair*>*> ____perceivedLoudnessPerLevel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PerceivedLoudnessSO, ____perceivedLoudnessPerLevel) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PerceivedLoudnessSO, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PerceivedLoudnessSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PerceivedLoudnessSO*, "", "PerceivedLoudnessSO");
NEED_NO_BOX(::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PerceivedLoudnessSO_PerceivedLevelLoudnessPair*, "", "PerceivedLoudnessSO/PerceivedLevelLoudnessPair");
NEED_NO_BOX(::GlobalNamespace::PerceivedLoudnessSO___c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PerceivedLoudnessSO___c__DisplayClass6_0*, "", "PerceivedLoudnessSO/<>c__DisplayClass6_0");
