#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TestAnalyticsModel)
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace GlobalNamespace {
class __TestAnalyticsModel____c;
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
class __TestAnalyticsModel____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TestAnalyticsModel);
MARK_REF_PTR_T(::GlobalNamespace::__TestAnalyticsModel____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TestAnalyticsModel::<>c*
class CORDL_TYPE __TestAnalyticsModel____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__TestAnalyticsModel____c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0))::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, ::StringW>* __9__3_0;

  static inline ::GlobalNamespace::__TestAnalyticsModel____c* New_ctor();

  /// @brief Method <LogEvent>b__3_0, addr 0x1034750, size 0x8c, virtual false, abstract: false, final false
  inline ::StringW _LogEvent_b__3_0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> kvp);

  /// @brief Method .ctor, addr 0x1034748, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__TestAnalyticsModel____c* getStaticF___9();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, ::StringW>* getStaticF___9__3_0();

  static inline void setStaticF___9(::GlobalNamespace::__TestAnalyticsModel____c* value);

  static inline void setStaticF___9__3_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TestAnalyticsModel____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TestAnalyticsModel____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TestAnalyticsModel____c(__TestAnalyticsModel____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TestAnalyticsModel____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TestAnalyticsModel____c(__TestAnalyticsModel____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TestAnalyticsModel____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::TestAnalyticsModel
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TestAnalyticsModel*
class CORDL_TYPE TestAnalyticsModel : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__TestAnalyticsModel____c;

  __declspec(property(get = get_supportsOpenDataPrivacyPage)) bool supportsOpenDataPrivacyPage;

  /// @brief Convert operator to "::GlobalNamespace::IAnalyticsModel"
  constexpr operator ::GlobalNamespace::IAnalyticsModel*() noexcept;

  /// @brief Method LogClick, addr 0x103443c, size 0xe0, virtual true, abstract: false, final true
  inline void LogClick(::StringW clickType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* clickData);

  /// @brief Method LogEditAvatarEvent, addr 0x103435c, size 0xe0, virtual true, abstract: false, final true
  inline void LogEditAvatarEvent(::StringW eventType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* avatarEventData);

  /// @brief Method LogEvent, addr 0x10341d0, size 0x18c, virtual true, abstract: false, final true
  inline void LogEvent(::StringW eventType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* eventData);

  /// @brief Method LogExposure, addr 0x10345fc, size 0xe0, virtual true, abstract: false, final true
  inline void LogExposure(::StringW exposureType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* exposureData);

  /// @brief Method LogImpression, addr 0x103451c, size 0xe0, virtual true, abstract: false, final true
  inline void LogImpression(::StringW impressionType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* impressionData);

  static inline ::GlobalNamespace::TestAnalyticsModel* New_ctor();

  /// @brief Method OpenDataPrivacyPage, addr 0x10341cc, size 0x4, virtual true, abstract: false, final true
  inline void OpenDataPrivacyPage();

  /// @brief Method .ctor, addr 0x10346dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_supportsOpenDataPrivacyPage, addr 0x10341c4, size 0x8, virtual true, abstract: false, final true
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TestAnalyticsModel, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TestAnalyticsModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TestAnalyticsModel*, "", "TestAnalyticsModel");
NEED_NO_BOX(::GlobalNamespace::__TestAnalyticsModel____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TestAnalyticsModel____c*, "", "TestAnalyticsModel/<>c");
