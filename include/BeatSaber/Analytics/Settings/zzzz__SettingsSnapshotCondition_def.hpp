#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Settings/SettingsSnapshotCondition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SettingsSnapshotCondition)
namespace BeatSaber::Analytics::Settings {
class SettingsSnapshotCondition___c;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace UnityEngine {
struct Hash128;
}
// Forward declare root types
namespace BeatSaber::Analytics::Settings {
class SettingsSnapshotCondition;
}
namespace BeatSaber::Analytics::Settings {
class SettingsSnapshotCondition___c;
}
// Write type traits
MARK_REF_T(::BeatSaber::Analytics::Settings::SettingsSnapshotCondition*);
MARK_REF_T(::BeatSaber::Analytics::Settings::SettingsSnapshotCondition___c*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Analytics::Settings::SettingsSnapshotCondition*, "BeatSaber.Analytics.Settings", "SettingsSnapshotCondition");
DEFINE_IL2CPP_CLASS(::BeatSaber::Analytics::Settings::SettingsSnapshotCondition___c*, "BeatSaber.Analytics.Settings", "SettingsSnapshotCondition/<>c");
// [CompilerGenerated]
// Dependencies System.Object
namespace BeatSaber::Analytics::Settings {
// Is value type: false
// CS Name: BeatSaber.Analytics.Settings.SettingsSnapshotCondition/<>c
class CORDL_TYPE SettingsSnapshotCondition___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::BeatSaber::Analytics::Settings::SettingsSnapshotCondition___c* __9;

  /// @brief Field <>9__9_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__9_0, put = setStaticF___9__9_0)) ::System::Comparison_1<::System::ValueTuple_2<::StringW, float_t>>* __9__9_0;

  static inline ::BeatSaber::Analytics::Settings::SettingsSnapshotCondition___c* New_ctor();

  /// @brief Method <ComputeHash>b__9_0, addr 0x350c348, size 0x10, virtual false, abstract: false, final false
  inline int32_t _ComputeHash_b__9_0(/* [TupleElementNames(new[] { "metricName", "value" })] */ ::System::ValueTuple_2<::StringW, float_t> a,
                                     /* [TupleElementNames(new[] { "metricName", "value" })] */ ::System::ValueTuple_2<::StringW, float_t> b);

  /// @brief Method .ctor, addr 0x350c344, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::BeatSaber::Analytics::Settings::SettingsSnapshotCondition___c* getStaticF___9();

  static inline ::System::Comparison_1<::System::ValueTuple_2<::StringW, float_t>>* getStaticF___9__9_0();

  static inline void setStaticF___9(::BeatSaber::Analytics::Settings::SettingsSnapshotCondition___c* value);

  static inline void setStaticF___9__9_0(::System::Comparison_1<::System::ValueTuple_2<::StringW, float_t>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsSnapshotCondition___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SettingsSnapshotCondition___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SettingsSnapshotCondition___c(SettingsSnapshotCondition___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SettingsSnapshotCondition___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SettingsSnapshotCondition___c(SettingsSnapshotCondition___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22779 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BeatSaber::Analytics::Settings::SettingsSnapshotCondition___c) == 0x10, "Size mismatch!");

} // namespace BeatSaber::Analytics::Settings
// Dependencies System.Object
namespace BeatSaber::Analytics::Settings {
// Is value type: false
// CS Name: BeatSaber.Analytics.Settings.SettingsSnapshotCondition
class CORDL_TYPE SettingsSnapshotCondition : public ::System::Object {
public:
  // Declarations
  using __c = ::BeatSaber::Analytics::Settings::SettingsSnapshotCondition___c;

  /// @brief Field _todayInDays, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__todayInDays, put = __cordl_internal_set__todayInDays)) int32_t _todayInDays;

  /// @brief Method ClearPersistedState, addr 0x350c264, size 0x8c, virtual false, abstract: false, final false
  static inline void ClearPersistedState();

  /// @brief Method ComputeHash, addr 0x350bd6c, size 0x354, virtual false, abstract: false, final false
  static inline ::UnityEngine::Hash128
  ComputeHash(/* [TupleElementNames(new[] { "metricName", "value" })] */ ::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::StringW, float_t>>* metrics, ::StringW extraPayload);

  static inline ::BeatSaber::Analytics::Settings::SettingsSnapshotCondition* New_ctor(int32_t todayInDays);

  /// @brief Method RecordFired, addr 0x350c1ac, size 0xb8, virtual false, abstract: false, final false
  inline void RecordFired(::UnityEngine::Hash128 currentHash);

  /// @brief Method ShouldFire, addr 0x350c0c0, size 0xec, virtual false, abstract: false, final false
  inline bool ShouldFire(::UnityEngine::Hash128 currentHash);

  constexpr int32_t const& __cordl_internal_get__todayInDays() const;

  constexpr int32_t& __cordl_internal_get__todayInDays();

  constexpr void __cordl_internal_set__todayInDays(int32_t value);

  /// @brief Method .ctor, addr 0x350bd64, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t todayInDays);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsSnapshotCondition();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SettingsSnapshotCondition", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SettingsSnapshotCondition(SettingsSnapshotCondition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SettingsSnapshotCondition", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SettingsSnapshotCondition(SettingsSnapshotCondition const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22780 };

  /// @brief Field kDayKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kDayKey{ u"SettingsAnalytics.SnapshotDay" };

  /// @brief Field kHashKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kHashKey{ u"SettingsAnalytics.SnapshotHash" };

  /// @brief Field kMaxDaysBetweenSnapshots offset 0xffffffff size 0x4
  static constexpr int32_t kMaxDaysBetweenSnapshots{ static_cast<int32_t>(0x1e) };

  /// @brief Field kNeverRecordedDay offset 0xffffffff size 0x4
  static constexpr int32_t kNeverRecordedDay{ static_cast<int32_t>(0x80000000) };

  /// @brief Field _todayInDays, offset: 0x10, size: 0x4, def value: None
  int32_t ____todayInDays;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Analytics::Settings::SettingsSnapshotCondition, ____todayInDays) == 0x10, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::Analytics::Settings::SettingsSnapshotCondition) == 0x18, "Size mismatch!");

} // namespace BeatSaber::Analytics::Settings
