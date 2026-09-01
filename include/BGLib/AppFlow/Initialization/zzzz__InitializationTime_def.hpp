#pragma once
// IWYU pragma private; include "BGLib\AppFlow\Initialization\InitializationTime.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InitializationTime)
namespace BGLib::AppFlow::Initialization {
class InitializationTime___c;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
struct TimeSpan;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace BGLib::AppFlow::Initialization {
class InitializationTime;
}
namespace BGLib::AppFlow::Initialization {
class InitializationTime___c;
}
// Write type traits
MARK_REF_T(::BGLib::AppFlow::Initialization::InitializationTime*);
MARK_REF_T(::BGLib::AppFlow::Initialization::InitializationTime___c*);
DEFINE_IL2CPP_CLASS(::BGLib::AppFlow::Initialization::InitializationTime*, "BGLib.AppFlow.Initialization", "InitializationTime");
DEFINE_IL2CPP_CLASS(::BGLib::AppFlow::Initialization::InitializationTime___c*, "BGLib.AppFlow.Initialization", "InitializationTime/<>c");
// Dependencies System.Object
namespace BGLib::AppFlow::Initialization {
// Is value type: false
// CS Name: BGLib.AppFlow.Initialization.InitializationTime/<>c
class CORDL_TYPE InitializationTime___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::BGLib::AppFlow::Initialization::InitializationTime___c* __9;

  /// @brief Field <>9__20_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__20_0, put = setStaticF___9__20_0)) ::System::Func_2<::System::ValueTuple_2<::StringW, ::System::Nullable_1<::System::TimeSpan>>, ::StringW>* __9__20_0;

  /// @brief Field <>9__20_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__20_1, put = setStaticF___9__20_1)) ::System::Func_2<::System::ValueTuple_2<::StringW, ::System::Nullable_1<::System::TimeSpan>>, ::StringW>* __9__20_1;

  static inline ::BGLib::AppFlow::Initialization::InitializationTime___c* New_ctor();

  /// @brief Method <ToString>b__20_0, addr 0x330b1ec, size 0x8, virtual false, abstract: false, final false
  inline ::StringW _ToString_b__20_0(::System::ValueTuple_2<::StringW, ::System::Nullable_1<::System::TimeSpan>> tuple);

  /// @brief Method <ToString>b__20_1, addr 0x330b1f4, size 0x198, virtual false, abstract: false, final false
  inline ::StringW _ToString_b__20_1(::System::ValueTuple_2<::StringW, ::System::Nullable_1<::System::TimeSpan>> tuple);

  /// @brief Method .ctor, addr 0x330b1e8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::BGLib::AppFlow::Initialization::InitializationTime___c* getStaticF___9();

  static inline ::System::Func_2<::System::ValueTuple_2<::StringW, ::System::Nullable_1<::System::TimeSpan>>, ::StringW>* getStaticF___9__20_0();

  static inline ::System::Func_2<::System::ValueTuple_2<::StringW, ::System::Nullable_1<::System::TimeSpan>>, ::StringW>* getStaticF___9__20_1();

  static inline void setStaticF___9(::BGLib::AppFlow::Initialization::InitializationTime___c* value);

  static inline void setStaticF___9__20_0(::System::Func_2<::System::ValueTuple_2<::StringW, ::System::Nullable_1<::System::TimeSpan>>, ::StringW>* value);

  static inline void setStaticF___9__20_1(::System::Func_2<::System::ValueTuple_2<::StringW, ::System::Nullable_1<::System::TimeSpan>>, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InitializationTime___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InitializationTime___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InitializationTime___c(InitializationTime___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InitializationTime___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InitializationTime___c(InitializationTime___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21565 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BGLib::AppFlow::Initialization::InitializationTime___c) == 0x10, "Size mismatch!");

} // namespace BGLib::AppFlow::Initialization
// Dependencies System.Object, System.TimeSpan
namespace BGLib::AppFlow::Initialization {
// Is value type: false
// CS Name: BGLib.AppFlow.Initialization.InitializationTime
class CORDL_TYPE InitializationTime : public ::System::Object {
public:
  // Declarations
  using __c = ::BGLib::AppFlow::Initialization::InitializationTime___c;

  /// @brief Field <Current>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__Current_k__BackingField, put = setStaticF__Current_k__BackingField)) ::BGLib::AppFlow::Initialization::InitializationTime* _Current_k__BackingField;

  /// @brief Field _endInitializationTimeStamp, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__endInitializationTimeStamp, put = __cordl_internal_set__endInitializationTimeStamp)) int64_t _endInitializationTimeStamp;

  /// @brief Field _endNoTransitionTimeStamp, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__endNoTransitionTimeStamp, put = __cordl_internal_set__endNoTransitionTimeStamp)) int64_t _endNoTransitionTimeStamp;

  /// @brief Field _endPreloadTimestamp, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__endPreloadTimestamp, put = __cordl_internal_set__endPreloadTimestamp)) int64_t _endPreloadTimestamp;

  /// @brief Field _endSceneContextTimestamp, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__endSceneContextTimestamp, put = __cordl_internal_set__endSceneContextTimestamp)) int64_t _endSceneContextTimestamp;

  /// @brief Field _exitEditorTimestamp, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__exitEditorTimestamp, put = __cordl_internal_set__exitEditorTimestamp)) int64_t _exitEditorTimestamp;

  /// @brief Field _startApplicationTimestamp, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__startApplicationTimestamp, put = __cordl_internal_set__startApplicationTimestamp)) int64_t _startApplicationTimestamp;

  /// @brief Field _startGameInitializationTimestamp, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__startGameInitializationTimestamp, put = __cordl_internal_set__startGameInitializationTimestamp)) int64_t _startGameInitializationTimestamp;

  /// @brief Field asyncInstallersDuration, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_asyncInstallersDuration, put = __cordl_internal_set_asyncInstallersDuration)) ::System::TimeSpan asyncInstallersDuration;

  /// @brief Field asyncLoadersDuration, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_asyncLoadersDuration, put = __cordl_internal_set_asyncLoadersDuration)) ::System::TimeSpan asyncLoadersDuration;

  /// @brief Method GetElapsedTime, addr 0x330b064, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::TimeSpan GetElapsedTime(int64_t startingTimestamp, int64_t endingTimestamp);

  /// @brief Method InitializeWithEditorTimestamp, addr 0x330a2d4, size 0xc4, virtual false, abstract: false, final false
  static inline void InitializeWithEditorTimestamp();

  /// @brief Method LogEventName, addr 0x330b104, size 0x4, virtual false, abstract: false, final false
  static inline void LogEventName(::StringW eventName);

  /// @brief Method LogVerbose, addr 0x330b108, size 0x8c, virtual false, abstract: false, final false
  static inline void LogVerbose(::StringW log);

  static inline ::BGLib::AppFlow::Initialization::InitializationTime* New_ctor();

  /// @brief Method ReportGameInitializationStarted, addr 0x33009fc, size 0x5c, virtual false, abstract: false, final false
  inline void ReportGameInitializationStarted();

  /// @brief Method ReportInitializationEnded, addr 0x3300c6c, size 0x5c, virtual false, abstract: false, final false
  inline void ReportInitializationEnded();

  /// @brief Method ReportNoTransitionInstallerEnded, addr 0x330a544, size 0x5c, virtual false, abstract: false, final false
  inline void ReportNoTransitionInstallerEnded();

  /// @brief Method ReportPreloadEnded, addr 0x3300b04, size 0x5c, virtual false, abstract: false, final false
  inline void ReportPreloadEnded();

  /// @brief Method ReportSceneContextEnded, addr 0x3300c10, size 0x5c, virtual false, abstract: false, final false
  inline void ReportSceneContextEnded();

  /// @brief Method RunBeforeInitialization, addr 0x330a410, size 0x134, virtual false, abstract: false, final false
  static inline void RunBeforeInitialization();

  /// @brief Method ToString, addr 0x330a5a0, size 0xac4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr int64_t const& __cordl_internal_get__endInitializationTimeStamp() const;

  constexpr int64_t& __cordl_internal_get__endInitializationTimeStamp();

  constexpr int64_t const& __cordl_internal_get__endNoTransitionTimeStamp() const;

  constexpr int64_t& __cordl_internal_get__endNoTransitionTimeStamp();

  constexpr int64_t const& __cordl_internal_get__endPreloadTimestamp() const;

  constexpr int64_t& __cordl_internal_get__endPreloadTimestamp();

  constexpr int64_t const& __cordl_internal_get__endSceneContextTimestamp() const;

  constexpr int64_t& __cordl_internal_get__endSceneContextTimestamp();

  constexpr int64_t const& __cordl_internal_get__exitEditorTimestamp() const;

  constexpr int64_t& __cordl_internal_get__exitEditorTimestamp();

  constexpr int64_t const& __cordl_internal_get__startApplicationTimestamp() const;

  constexpr int64_t& __cordl_internal_get__startApplicationTimestamp();

  constexpr int64_t const& __cordl_internal_get__startGameInitializationTimestamp() const;

  constexpr int64_t& __cordl_internal_get__startGameInitializationTimestamp();

  constexpr ::System::TimeSpan const& __cordl_internal_get_asyncInstallersDuration() const;

  constexpr ::System::TimeSpan& __cordl_internal_get_asyncInstallersDuration();

  constexpr ::System::TimeSpan const& __cordl_internal_get_asyncLoadersDuration() const;

  constexpr ::System::TimeSpan& __cordl_internal_get_asyncLoadersDuration();

  constexpr void __cordl_internal_set__endInitializationTimeStamp(int64_t value);

  constexpr void __cordl_internal_set__endNoTransitionTimeStamp(int64_t value);

  constexpr void __cordl_internal_set__endPreloadTimestamp(int64_t value);

  constexpr void __cordl_internal_set__endSceneContextTimestamp(int64_t value);

  constexpr void __cordl_internal_set__exitEditorTimestamp(int64_t value);

  constexpr void __cordl_internal_set__startApplicationTimestamp(int64_t value);

  constexpr void __cordl_internal_set__startGameInitializationTimestamp(int64_t value);

  constexpr void __cordl_internal_set_asyncInstallersDuration(::System::TimeSpan value);

  constexpr void __cordl_internal_set_asyncLoadersDuration(::System::TimeSpan value);

  /// @brief Method .ctor, addr 0x330a398, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::BGLib::AppFlow::Initialization::InitializationTime* getStaticF__Current_k__BackingField();

  /// @brief Method get_Current, addr 0x330a238, size 0x4c, virtual false, abstract: false, final false
  static inline ::BGLib::AppFlow::Initialization::InitializationTime* get_Current();

  static inline void setStaticF__Current_k__BackingField(::BGLib::AppFlow::Initialization::InitializationTime* value);

  /// @brief Method set_Current, addr 0x330a284, size 0x50, virtual false, abstract: false, final false
  static inline void set_Current(::BGLib::AppFlow::Initialization::InitializationTime* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InitializationTime();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InitializationTime", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InitializationTime(InitializationTime&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InitializationTime", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InitializationTime(InitializationTime const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21566 };

  /// @brief Field asyncLoadersDuration, offset: 0x10, size: 0x8, def value: None
  ::System::TimeSpan ___asyncLoadersDuration;

  /// @brief Field asyncInstallersDuration, offset: 0x18, size: 0x8, def value: None
  ::System::TimeSpan ___asyncInstallersDuration;

  /// @brief Field _exitEditorTimestamp, offset: 0x20, size: 0x8, def value: None
  int64_t ____exitEditorTimestamp;

  /// @brief Field _startApplicationTimestamp, offset: 0x28, size: 0x8, def value: None
  int64_t ____startApplicationTimestamp;

  /// @brief Field _startGameInitializationTimestamp, offset: 0x30, size: 0x8, def value: None
  int64_t ____startGameInitializationTimestamp;

  /// @brief Field _endPreloadTimestamp, offset: 0x38, size: 0x8, def value: None
  int64_t ____endPreloadTimestamp;

  /// @brief Field _endSceneContextTimestamp, offset: 0x40, size: 0x8, def value: None
  int64_t ____endSceneContextTimestamp;

  /// @brief Field _endInitializationTimeStamp, offset: 0x48, size: 0x8, def value: None
  int64_t ____endInitializationTimeStamp;

  /// @brief Field _endNoTransitionTimeStamp, offset: 0x50, size: 0x8, def value: None
  int64_t ____endNoTransitionTimeStamp;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGLib::AppFlow::Initialization::InitializationTime, ___asyncLoadersDuration) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::InitializationTime, ___asyncInstallersDuration) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::InitializationTime, ____exitEditorTimestamp) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::InitializationTime, ____startApplicationTimestamp) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::InitializationTime, ____startGameInitializationTimestamp) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::InitializationTime, ____endPreloadTimestamp) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::InitializationTime, ____endSceneContextTimestamp) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::InitializationTime, ____endInitializationTimeStamp) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::InitializationTime, ____endNoTransitionTimeStamp) == 0x50, "Offset mismatch!");

static_assert(sizeof(::BGLib::AppFlow::Initialization::InitializationTime) == 0x58, "Size mismatch!");

} // namespace BGLib::AppFlow::Initialization
