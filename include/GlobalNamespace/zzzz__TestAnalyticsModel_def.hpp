#pragma once
// IWYU pragma private; include "GlobalNamespace/TestAnalyticsModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IAnalyticsModel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TestAnalyticsModel)
namespace GlobalNamespace {
struct BeatSaberSessionEventType;
}
namespace GlobalNamespace {
class TestAnalyticsModel___c;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class TestAnalyticsModel;
}
namespace GlobalNamespace {
class TestAnalyticsModel___c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TestAnalyticsModel);
MARK_REF_PTR_T(::GlobalNamespace::TestAnalyticsModel___c);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: TestAnalyticsModel/<>c
class CORDL_TYPE TestAnalyticsModel___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::TestAnalyticsModel___c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, ::StringW>* __9__3_0;

  static inline ::GlobalNamespace::TestAnalyticsModel___c* New_ctor();

  /// @brief Method <LogEvent>b__3_0, addr 0x2242640, size 0x8c, virtual false, abstract: false, final false
  inline ::StringW _LogEvent_b__3_0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> kvp);

  /// @brief Method .ctor, addr 0x2242638, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::TestAnalyticsModel___c* getStaticF___9();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, ::StringW>* getStaticF___9__3_0();

  static inline void setStaticF___9(::GlobalNamespace::TestAnalyticsModel___c* value);

  static inline void setStaticF___9__3_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TestAnalyticsModel___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TestAnalyticsModel___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TestAnalyticsModel___c(TestAnalyticsModel___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TestAnalyticsModel___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TestAnalyticsModel___c(TestAnalyticsModel___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19116 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TestAnalyticsModel___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IAnalyticsModel, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: TestAnalyticsModel
class CORDL_TYPE TestAnalyticsModel : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::TestAnalyticsModel___c;

  __declspec(property(get = get_supportsOpenDataPrivacyPage)) bool supportsOpenDataPrivacyPage;

  /// @brief Convert operator to "::GlobalNamespace::IAnalyticsModel"
  constexpr operator ::GlobalNamespace::IAnalyticsModel*() noexcept;

  /// @brief Method LogClick, addr 0x224234c, size 0xd8, virtual true, abstract: false, final true
  inline void LogClick(::StringW clickType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* clickData);

  /// @brief Method LogEditAvatarEvent, addr 0x2241ff8, size 0xd8, virtual true, abstract: false, final true
  inline void LogEditAvatarEvent(::StringW eventType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* avatarEventData);

  /// @brief Method LogEvent, addr 0x2241e6c, size 0x18c, virtual true, abstract: false, final true
  inline void LogEvent(::StringW eventType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* eventData);

  /// @brief Method LogExposure, addr 0x22424fc, size 0xd8, virtual true, abstract: false, final true
  inline void LogExposure(::StringW exposureType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* exposureData);

  /// @brief Method LogImpression, addr 0x2242424, size 0xd8, virtual true, abstract: false, final true
  inline void LogImpression(::StringW impressionType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* impressionData);

  /// @brief Method LogSessionEvent, addr 0x22420d0, size 0x27c, virtual true, abstract: false, final true
  inline void LogSessionEvent(::GlobalNamespace::BeatSaberSessionEventType eventType, int32_t _);

  static inline ::GlobalNamespace::TestAnalyticsModel* New_ctor();

  /// @brief Method OpenDataPrivacyPage, addr 0x2241e68, size 0x4, virtual true, abstract: false, final true
  inline void OpenDataPrivacyPage();

  /// @brief Method .ctor, addr 0x22425d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_supportsOpenDataPrivacyPage, addr 0x2241e60, size 0x8, virtual true, abstract: false, final true
  inline bool get_supportsOpenDataPrivacyPage();

  /// @brief Convert to "::GlobalNamespace::IAnalyticsModel"
  constexpr ::GlobalNamespace::IAnalyticsModel* i___GlobalNamespace__IAnalyticsModel() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TestAnalyticsModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TestAnalyticsModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TestAnalyticsModel(TestAnalyticsModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TestAnalyticsModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TestAnalyticsModel(TestAnalyticsModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19117 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TestAnalyticsModel, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TestAnalyticsModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TestAnalyticsModel*, "", "TestAnalyticsModel");
NEED_NO_BOX(::GlobalNamespace::TestAnalyticsModel___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TestAnalyticsModel___c*, "", "TestAnalyticsModel/<>c");
