#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DlcPromoPanelModel_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DlcPromoPanelModel)
namespace GlobalNamespace {
class BeatmapLevelPack;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class DlcPromoPanelDataSO;
}
namespace GlobalNamespace {
struct EntitlementStatus;
}
namespace GlobalNamespace {
class IAdditionalContentModel;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace GlobalNamespace {
class IPlatformInit;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
struct PlayerSensitivityFlag;
}
namespace GlobalNamespace {
class PromoInfoSO;
}
namespace GlobalNamespace {
class __DlcPromoPanelModel__PromoInfo;
}
namespace GlobalNamespace {
struct __DlcPromoPanelModel__PromoInfo__PromoType;
}
namespace GlobalNamespace {
struct __DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__26;
}
namespace GlobalNamespace {
struct __DlcPromoPanelModel___InitializeAsync_d__16;
}
namespace GlobalNamespace {
struct __DlcPromoPanelModel___Initialize_d__15;
}
namespace GlobalNamespace {
struct __DlcPromoPanelModel___UpdatePacksAsync_d__25;
}
namespace GlobalNamespace {
class __DlcPromoPanelModel____c__DisplayClass17_0;
}
namespace GlobalNamespace {
class __PackDefinitionSO__LevelPromoInfo;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Random;
}
namespace UnityEngine {
class Sprite;
}
namespace Zenject {
class IInitializable;
}
// Forward declare root types
namespace GlobalNamespace {
struct __DlcPromoPanelModel__PromoInfo__PromoType;
}
namespace GlobalNamespace {
class DlcPromoPanelModel;
}
namespace GlobalNamespace {
class __DlcPromoPanelModel__PromoInfo;
}
namespace GlobalNamespace {
class __DlcPromoPanelModel____c__DisplayClass17_0;
}
namespace GlobalNamespace {
struct __DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__26;
}
namespace GlobalNamespace {
struct __DlcPromoPanelModel___InitializeAsync_d__16;
}
namespace GlobalNamespace {
struct __DlcPromoPanelModel___Initialize_d__15;
}
namespace GlobalNamespace {
struct __DlcPromoPanelModel___UpdatePacksAsync_d__25;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo__PromoType);
MARK_REF_PTR_T(::GlobalNamespace::DlcPromoPanelModel);
MARK_REF_PTR_T(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo);
MARK_REF_PTR_T(::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass17_0);
MARK_VAL_T(::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__26);
MARK_VAL_T(::GlobalNamespace::__DlcPromoPanelModel___InitializeAsync_d__16);
MARK_VAL_T(::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__15);
MARK_VAL_T(::GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__25);
// Type: ::PromoType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::DlcPromoPanelModel::PromoInfo::PromoType
struct CORDL_TYPE __DlcPromoPanelModel__PromoInfo__PromoType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____DlcPromoPanelModel__PromoInfo__PromoType_Unwrapped
  enum struct ____DlcPromoPanelModel__PromoInfo__PromoType_Unwrapped : int32_t {
    __E_Pack = static_cast<int32_t>(0x0),
    __E_Level = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____DlcPromoPanelModel__PromoInfo__PromoType_Unwrapped() const noexcept {
    return static_cast<____DlcPromoPanelModel__PromoInfo__PromoType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DlcPromoPanelModel__PromoInfo__PromoType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __DlcPromoPanelModel__PromoInfo__PromoType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Level value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__DlcPromoPanelModel__PromoInfo__PromoType const Level;

  /// @brief Field Pack value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__DlcPromoPanelModel__PromoInfo__PromoType const Pack;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo__PromoType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo__PromoType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PromoInfo
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DlcPromoPanelModel::PromoInfo*
class CORDL_TYPE __DlcPromoPanelModel__PromoInfo : public ::System::Object {
public:
  // Declarations
  using PromoType = ::GlobalNamespace::__DlcPromoPanelModel__PromoInfo__PromoType;

  /// @brief Field bannerImage, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_bannerImage, put = __cordl_internal_set_bannerImage))::UnityW<::UnityEngine::Sprite> bannerImage;

  /// @brief Field bannerPromoText, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_bannerPromoText, put = __cordl_internal_set_bannerPromoText))::StringW bannerPromoText;

  /// @brief Field bannerPromoTextPosition, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_bannerPromoTextPosition, put = __cordl_internal_set_bannerPromoTextPosition)) float_t bannerPromoTextPosition;

  /// @brief Field contentRating, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_contentRating, put = __cordl_internal_set_contentRating))::GlobalNamespace::PlayerSensitivityFlag contentRating;

  /// @brief Field id, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_id, put = __cordl_internal_set_id))::StringW id;

  /// @brief Field promoType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_promoType, put = __cordl_internal_set_promoType))::GlobalNamespace::__DlcPromoPanelModel__PromoInfo__PromoType promoType;

  static inline ::GlobalNamespace::__DlcPromoPanelModel__PromoInfo* New_ctor(::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo* levelPromoInfo,
                                                                             ::GlobalNamespace::PlayerSensitivityFlag contentRating);

  static inline ::GlobalNamespace::__DlcPromoPanelModel__PromoInfo* New_ctor(::StringW packId, ::GlobalNamespace::PromoInfoSO* packPromoInfo, ::GlobalNamespace::PlayerSensitivityFlag contentRating);

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_bannerImage() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_bannerImage();

  constexpr ::StringW const& __cordl_internal_get_bannerPromoText() const;

  constexpr ::StringW& __cordl_internal_get_bannerPromoText();

  constexpr float_t const& __cordl_internal_get_bannerPromoTextPosition() const;

  constexpr float_t& __cordl_internal_get_bannerPromoTextPosition();

  constexpr ::GlobalNamespace::PlayerSensitivityFlag const& __cordl_internal_get_contentRating() const;

  constexpr ::GlobalNamespace::PlayerSensitivityFlag& __cordl_internal_get_contentRating();

  constexpr ::StringW const& __cordl_internal_get_id() const;

  constexpr ::StringW& __cordl_internal_get_id();

  constexpr ::GlobalNamespace::__DlcPromoPanelModel__PromoInfo__PromoType const& __cordl_internal_get_promoType() const;

  constexpr ::GlobalNamespace::__DlcPromoPanelModel__PromoInfo__PromoType& __cordl_internal_get_promoType();

  constexpr void __cordl_internal_set_bannerImage(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set_bannerPromoText(::StringW value);

  constexpr void __cordl_internal_set_bannerPromoTextPosition(float_t value);

  constexpr void __cordl_internal_set_contentRating(::GlobalNamespace::PlayerSensitivityFlag value);

  constexpr void __cordl_internal_set_id(::StringW value);

  constexpr void __cordl_internal_set_promoType(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo__PromoType value);

  /// @brief Method .ctor, addr 0x12f7864, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo* levelPromoInfo, ::GlobalNamespace::PlayerSensitivityFlag contentRating);

  /// @brief Method .ctor, addr 0x12f780c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::StringW packId, ::GlobalNamespace::PromoInfoSO* packPromoInfo, ::GlobalNamespace::PlayerSensitivityFlag contentRating);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DlcPromoPanelModel__PromoInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DlcPromoPanelModel__PromoInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DlcPromoPanelModel__PromoInfo(__DlcPromoPanelModel__PromoInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DlcPromoPanelModel__PromoInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DlcPromoPanelModel__PromoInfo(__DlcPromoPanelModel__PromoInfo const&) = delete;

  /// @brief Field promoType, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__DlcPromoPanelModel__PromoInfo__PromoType ___promoType;

  /// @brief Field id, offset: 0x18, size: 0x8, def value: None
  ::StringW ___id;

  /// @brief Field contentRating, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::PlayerSensitivityFlag ___contentRating;

  /// @brief Field bannerImage, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ___bannerImage;

  /// @brief Field bannerPromoText, offset: 0x30, size: 0x8, def value: None
  ::StringW ___bannerPromoText;

  /// @brief Field bannerPromoTextPosition, offset: 0x38, size: 0x4, def value: None
  float_t ___bannerPromoTextPosition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo, ___promoType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo, ___id) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo, ___contentRating) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo, ___bannerImage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo, ___bannerPromoText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo, ___bannerPromoTextPosition) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<Initialize>d__15
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::DlcPromoPanelModel::<Initialize>d__15
struct CORDL_TYPE __DlcPromoPanelModel___Initialize_d__15 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x12f85d8, size 0x228, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x12f8800, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DlcPromoPanelModel___Initialize_d__15();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __DlcPromoPanelModel___Initialize_d__15(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::DlcPromoPanelModel* __4__this,
                                                    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::DlcPromoPanelModel* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__15, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__15, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__15, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__15, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__15, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<InitializeAsync>d__16
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::DlcPromoPanelModel::<InitializeAsync>d__16
struct CORDL_TYPE __DlcPromoPanelModel___InitializeAsync_d__16 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x12f880c, size 0x56c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x12f8d78, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DlcPromoPanelModel___InitializeAsync_d__16();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __DlcPromoPanelModel___InitializeAsync_d__16(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::DlcPromoPanelModel* __4__this,
                                                         ::System::Runtime::CompilerServices::TaskAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::DlcPromoPanelModel* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DlcPromoPanelModel___InitializeAsync_d__16, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___InitializeAsync_d__16, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___InitializeAsync_d__16, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___InitializeAsync_d__16, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___InitializeAsync_d__16, __u__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___InitializeAsync_d__16, __u__2) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass17_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DlcPromoPanelModel::<>c__DisplayClass17_0*
class CORDL_TYPE __DlcPromoPanelModel____c__DisplayClass17_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field sensitivityFlag, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_sensitivityFlag, put = __cordl_internal_set_sensitivityFlag))::GlobalNamespace::PlayerSensitivityFlag sensitivityFlag;

  static inline ::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass17_0* New_ctor();

  /// @brief Method <GetPackDataForMainMenuPromoBanner>b__0, addr 0x12f8d84, size 0x24, virtual false, abstract: false, final false
  inline bool _GetPackDataForMainMenuPromoBanner_b__0(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo* x);

  /// @brief Method <GetPackDataForMainMenuPromoBanner>b__1, addr 0x12f8da8, size 0x24, virtual false, abstract: false, final false
  inline bool _GetPackDataForMainMenuPromoBanner_b__1(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo* x);

  constexpr ::GlobalNamespace::PlayerSensitivityFlag const& __cordl_internal_get_sensitivityFlag() const;

  constexpr ::GlobalNamespace::PlayerSensitivityFlag& __cordl_internal_get_sensitivityFlag();

  constexpr void __cordl_internal_set_sensitivityFlag(::GlobalNamespace::PlayerSensitivityFlag value);

  /// @brief Method .ctor, addr 0x12f7d7c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DlcPromoPanelModel____c__DisplayClass17_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DlcPromoPanelModel____c__DisplayClass17_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DlcPromoPanelModel____c__DisplayClass17_0(__DlcPromoPanelModel____c__DisplayClass17_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DlcPromoPanelModel____c__DisplayClass17_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DlcPromoPanelModel____c__DisplayClass17_0(__DlcPromoPanelModel____c__DisplayClass17_0 const&) = delete;

  /// @brief Field sensitivityFlag, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::PlayerSensitivityFlag ___sensitivityFlag;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass17_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass17_0, ___sensitivityFlag) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<UpdatePacksAsync>d__25
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::DlcPromoPanelModel::<UpdatePacksAsync>d__25
struct CORDL_TYPE __DlcPromoPanelModel___UpdatePacksAsync_d__25 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x12f8dcc, size 0x818, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x12f95e4, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DlcPromoPanelModel___UpdatePacksAsync_d__25();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "",
  // def_value: None }, CppParam { name: "_newNotOwnedMusicPackPromoInfos_5__2", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*", modifiers: "",
  // def_value: None }, CppParam { name: "_newOwnedMusicPackPromoInfos_5__3", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::EntitlementStatus,::Array<::GlobalNamespace::EntitlementStatus>*>>", modifiers: "", def_value: None }]
  constexpr __DlcPromoPanelModel___UpdatePacksAsync_d__25(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::DlcPromoPanelModel* __4__this,
      ::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>* _newNotOwnedMusicPackPromoInfos_5__2,
      ::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>* _newOwnedMusicPackPromoInfos_5__3,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::EntitlementStatus, ::Array<::GlobalNamespace::EntitlementStatus>*>> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::DlcPromoPanelModel* __4__this;

  /// @brief Field <newNotOwnedMusicPackPromoInfos>5__2, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>* _newNotOwnedMusicPackPromoInfos_5__2;

  /// @brief Field <newOwnedMusicPackPromoInfos>5__3, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>* _newOwnedMusicPackPromoInfos_5__3;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::EntitlementStatus, ::Array<::GlobalNamespace::EntitlementStatus>*>> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__25, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__25, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__25, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__25, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__25, _newNotOwnedMusicPackPromoInfos_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__25, _newOwnedMusicPackPromoInfos_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__25, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<HandleAdditionalContentModelDidInvalidateData>d__26
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::DlcPromoPanelModel::<HandleAdditionalContentModelDidInvalidateData>d__26
struct CORDL_TYPE __DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__26 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x12f95f0, size 0x228, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x12f9818, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__26();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__26(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                       ::GlobalNamespace::DlcPromoPanelModel* __4__this,
                                                                                       ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::DlcPromoPanelModel* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__26, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__26, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__26, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__26, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__26, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::DlcPromoPanelModel
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DlcPromoPanelModel*
class CORDL_TYPE DlcPromoPanelModel : public ::System::Object {
public:
  // Declarations
  using PromoInfo = ::GlobalNamespace::__DlcPromoPanelModel__PromoInfo;

  using _HandleAdditionalContentModelDidInvalidateData_d__26 = ::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__26;

  using _InitializeAsync_d__16 = ::GlobalNamespace::__DlcPromoPanelModel___InitializeAsync_d__16;

  using _Initialize_d__15 = ::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__15;

  using _UpdatePacksAsync_d__25 = ::GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__25;

  using __c__DisplayClass17_0 = ::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass17_0;

  /// @brief Field _additionalContentModel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__additionalContentModel, put = __cordl_internal_set__additionalContentModel))::GlobalNamespace::IAdditionalContentModel* _additionalContentModel;

  /// @brief Field _analyticsModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__analyticsModel, put = __cordl_internal_set__analyticsModel))::GlobalNamespace::IAnalyticsModel* _analyticsModel;

  /// @brief Field _beatmapLevelsModel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel))::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _defaultPromoInfo, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultPromoInfo, put = __cordl_internal_set__defaultPromoInfo))::GlobalNamespace::__DlcPromoPanelModel__PromoInfo* _defaultPromoInfo;

  /// @brief Field _dlcPromoPanelData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__dlcPromoPanelData, put = __cordl_internal_set__dlcPromoPanelData))::UnityW<::GlobalNamespace::DlcPromoPanelDataSO> _dlcPromoPanelData;

  /// @brief Field _initialized, offset 0x51, size 0x1
  __declspec(property(get = __cordl_internal_get__initialized, put = __cordl_internal_set__initialized)) bool _initialized;

  /// @brief Field _notOwnedMusicPackPromoInfos, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__notOwnedMusicPackPromoInfos,
                      put = __cordl_internal_set__notOwnedMusicPackPromoInfos))::ArrayW<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*,
                                                                                        ::Array<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*> _notOwnedMusicPackPromoInfos;

  /// @brief Field _ownedMusicPackPromoInfos, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__ownedMusicPackPromoInfos,
                      put = __cordl_internal_set__ownedMusicPackPromoInfos))::ArrayW<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*,
                                                                                     ::Array<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*> _ownedMusicPackPromoInfos;

  /// @brief Field _platformInit, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__platformInit, put = __cordl_internal_set__platformInit))::GlobalNamespace::IPlatformInit* _platformInit;

  /// @brief Field _playerDataModel, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel))::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _promoInfos, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__promoInfos,
                      put = __cordl_internal_set__promoInfos))::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>* _promoInfos;

  /// @brief Field _random, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__random, put = __cordl_internal_set__random))::System::Random* _random;

  /// @brief Field _updatingNotOwnedPacks, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__updatingNotOwnedPacks, put = __cordl_internal_set__updatingNotOwnedPacks)) bool _updatingNotOwnedPacks;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Method BuyLevelButtonWasPressed, addr 0x12f80bc, size 0xf0, virtual false, abstract: false, final false
  inline void BuyLevelButtonWasPressed(::GlobalNamespace::BeatmapLevel* level, ::StringW page, ::StringW customText);

  /// @brief Method BuyLevelButtonWasShown, addr 0x12f81ac, size 0xf0, virtual false, abstract: false, final false
  inline void BuyLevelButtonWasShown(::GlobalNamespace::BeatmapLevel* level, ::StringW page, ::StringW customText);

  /// @brief Method BuyPackButtonWasPressed, addr 0x12f829c, size 0xf0, virtual false, abstract: false, final false
  inline void BuyPackButtonWasPressed(::GlobalNamespace::BeatmapLevelPack* pack, ::StringW page, ::StringW customText);

  /// @brief Method BuyPackButtonWasShown, addr 0x12f838c, size 0xf0, virtual false, abstract: false, final false
  inline void BuyPackButtonWasShown(::GlobalNamespace::BeatmapLevelPack* pack, ::StringW page, ::StringW customText);

  /// @brief Method GetExperimentEventData, addr 0x12f7ea0, size 0x120, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* GetExperimentEventData(::StringW itemId, ::StringW page, ::StringW customText);

  /// @brief Method GetPackDataForMainMenuPromoBanner, addr 0x12f7a20, size 0x35c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__DlcPromoPanelModel__PromoInfo* GetPackDataForMainMenuPromoBanner(ByRef<bool> owned);

  /// @brief Method HandleAdditionalContentModelDidInvalidateData, addr 0x12f8544, size 0x94, virtual false, abstract: false, final false
  inline void HandleAdditionalContentModelDidInvalidateData();

  /// @brief Method Initialize, addr 0x12f78c0, size 0x94, virtual true, abstract: false, final true
  inline void Initialize();

  /// @brief Method InitializeAsync, addr 0x12f7954, size 0xcc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* InitializeAsync();

  /// @brief Method MainMenuDlcPromoBannerWasPressed, addr 0x12f7fc0, size 0xfc, virtual false, abstract: false, final false
  inline void MainMenuDlcPromoBannerWasPressed(::StringW packId, ::StringW customText);

  /// @brief Method MainMenuDlcPromoBannerWasShown, addr 0x12f7d84, size 0x11c, virtual false, abstract: false, final false
  inline void MainMenuDlcPromoBannerWasShown(::StringW packId, ::StringW customText);

  static inline ::GlobalNamespace::DlcPromoPanelModel* New_ctor(::GlobalNamespace::IAdditionalContentModel* additionalContentModel, ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel,
                                                                ::GlobalNamespace::IAnalyticsModel* analyticsModel, ::GlobalNamespace::DlcPromoPanelDataSO* dlcPromoPanelData,
                                                                ::GlobalNamespace::PlayerDataModel* playerDataModel, ::GlobalNamespace::IPlatformInit* platformInit);

  /// @brief Method UpdatePacksAsync, addr 0x12f847c, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* UpdatePacksAsync();

  constexpr ::GlobalNamespace::IAdditionalContentModel*& __cordl_internal_get__additionalContentModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAdditionalContentModel*> const& __cordl_internal_get__additionalContentModel() const;

  constexpr ::GlobalNamespace::IAnalyticsModel*& __cordl_internal_get__analyticsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> const& __cordl_internal_get__analyticsModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr ::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*& __cordl_internal_get__defaultPromoInfo();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*> const& __cordl_internal_get__defaultPromoInfo() const;

  constexpr ::UnityW<::GlobalNamespace::DlcPromoPanelDataSO> const& __cordl_internal_get__dlcPromoPanelData() const;

  constexpr ::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>& __cordl_internal_get__dlcPromoPanelData();

  constexpr bool const& __cordl_internal_get__initialized() const;

  constexpr bool& __cordl_internal_get__initialized();

  constexpr ::ArrayW<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*> const&
  __cordl_internal_get__notOwnedMusicPackPromoInfos() const;

  constexpr ::ArrayW<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*>& __cordl_internal_get__notOwnedMusicPackPromoInfos();

  constexpr ::ArrayW<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*> const& __cordl_internal_get__ownedMusicPackPromoInfos() const;

  constexpr ::ArrayW<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*>& __cordl_internal_get__ownedMusicPackPromoInfos();

  constexpr ::GlobalNamespace::IPlatformInit*& __cordl_internal_get__platformInit();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPlatformInit*> const& __cordl_internal_get__platformInit() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*& __cordl_internal_get__promoInfos();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*> const& __cordl_internal_get__promoInfos() const;

  constexpr ::System::Random*& __cordl_internal_get__random();

  constexpr ::cordl_internals::to_const_pointer<::System::Random*> const& __cordl_internal_get__random() const;

  constexpr bool const& __cordl_internal_get__updatingNotOwnedPacks() const;

  constexpr bool& __cordl_internal_get__updatingNotOwnedPacks();

  constexpr void __cordl_internal_set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel* value);

  constexpr void __cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value);

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__defaultPromoInfo(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo* value);

  constexpr void __cordl_internal_set__dlcPromoPanelData(::UnityW<::GlobalNamespace::DlcPromoPanelDataSO> value);

  constexpr void __cordl_internal_set__initialized(bool value);

  constexpr void __cordl_internal_set__notOwnedMusicPackPromoInfos(::ArrayW<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*> value);

  constexpr void __cordl_internal_set__ownedMusicPackPromoInfos(::ArrayW<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*> value);

  constexpr void __cordl_internal_set__platformInit(::GlobalNamespace::IPlatformInit* value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__promoInfos(::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>* value);

  constexpr void __cordl_internal_set__random(::System::Random* value);

  constexpr void __cordl_internal_set__updatingNotOwnedPacks(bool value);

  /// @brief Method .ctor, addr 0x12f722c, size 0x5e0, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IAdditionalContentModel* additionalContentModel, ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel, ::GlobalNamespace::IAnalyticsModel* analyticsModel,
                    ::GlobalNamespace::DlcPromoPanelDataSO* dlcPromoPanelData, ::GlobalNamespace::PlayerDataModel* playerDataModel, ::GlobalNamespace::IPlatformInit* platformInit);

  /// @brief Convert to "::Zenject::IInitializable"
  constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DlcPromoPanelModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DlcPromoPanelModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DlcPromoPanelModel(DlcPromoPanelModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DlcPromoPanelModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DlcPromoPanelModel(DlcPromoPanelModel const&) = delete;

  /// @brief Field _additionalContentModel, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IAdditionalContentModel* ____additionalContentModel;

  /// @brief Field _beatmapLevelsModel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field _analyticsModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IAnalyticsModel* ____analyticsModel;

  /// @brief Field _dlcPromoPanelData, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::DlcPromoPanelDataSO> ____dlcPromoPanelData;

  /// @brief Field _playerDataModel, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _platformInit, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IPlatformInit* ____platformInit;

  /// @brief Field _notOwnedMusicPackPromoInfos, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*> ____notOwnedMusicPackPromoInfos;

  /// @brief Field _ownedMusicPackPromoInfos, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*> ____ownedMusicPackPromoInfos;

  /// @brief Field _updatingNotOwnedPacks, offset: 0x50, size: 0x1, def value: None
  bool ____updatingNotOwnedPacks;

  /// @brief Field _initialized, offset: 0x51, size: 0x1, def value: None
  bool ____initialized;

  /// @brief Field _random, offset: 0x58, size: 0x8, def value: None
  ::System::Random* ____random;

  /// @brief Field _promoInfos, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>* ____promoInfos;

  /// @brief Field _defaultPromoInfo, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::__DlcPromoPanelModel__PromoInfo* ____defaultPromoInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DlcPromoPanelModel, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____additionalContentModel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____beatmapLevelsModel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____analyticsModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____dlcPromoPanelData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____playerDataModel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____platformInit) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____notOwnedMusicPackPromoInfos) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____ownedMusicPackPromoInfos) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____updatingNotOwnedPacks) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____initialized) == 0x51, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____random) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____promoInfos) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____defaultPromoInfo) == 0x68, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo__PromoType, "", "DlcPromoPanelModel/PromoInfo/PromoType");
NEED_NO_BOX(::GlobalNamespace::DlcPromoPanelModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DlcPromoPanelModel*, "", "DlcPromoPanelModel");
NEED_NO_BOX(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, "", "DlcPromoPanelModel/PromoInfo");
NEED_NO_BOX(::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass17_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass17_0*, "", "DlcPromoPanelModel/<>c__DisplayClass17_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__26, "", "DlcPromoPanelModel/<HandleAdditionalContentModelDidInvalidateData>d__26");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DlcPromoPanelModel___InitializeAsync_d__16, "", "DlcPromoPanelModel/<InitializeAsync>d__16");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__15, "", "DlcPromoPanelModel/<Initialize>d__15");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__25, "", "DlcPromoPanelModel/<UpdatePacksAsync>d__25");
