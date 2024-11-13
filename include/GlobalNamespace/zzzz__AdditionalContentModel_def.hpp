#pragma once
// IWYU pragma private; include "GlobalNamespace/AdditionalContentModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AdditionalContentModel)
namespace GlobalNamespace {
struct BeatmapLevelDataVersion;
}
namespace GlobalNamespace {
struct EntitlementStatus;
}
namespace GlobalNamespace {
class IAdditionalContentEntitlementModel;
}
namespace GlobalNamespace {
class IAdditionalContentModel;
}
namespace GlobalNamespace {
struct IsPackBetterBuyThanLevelResult;
}
namespace GlobalNamespace {
struct OpenProductStoreResult;
}
namespace GlobalNamespace {
struct __AdditionalContentModel__UpdateEntitlementsResult;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
struct __AdditionalContentModel__UpdateEntitlementsResult;
}
namespace GlobalNamespace {
class AdditionalContentModel;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult);
MARK_REF_PTR_T(::GlobalNamespace::AdditionalContentModel);
// Type: ::UpdateEntitlementsResult
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AdditionalContentModel::UpdateEntitlementsResult
struct CORDL_TYPE __AdditionalContentModel__UpdateEntitlementsResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____AdditionalContentModel__UpdateEntitlementsResult_Unwrapped
  enum struct ____AdditionalContentModel__UpdateEntitlementsResult_Unwrapped : int32_t {
    __E_OK = static_cast<int32_t>(0x0),
    __E_Failed = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____AdditionalContentModel__UpdateEntitlementsResult_Unwrapped() const noexcept {
    return static_cast<____AdditionalContentModel__UpdateEntitlementsResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AdditionalContentModel__UpdateEntitlementsResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __AdditionalContentModel__UpdateEntitlementsResult(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Failed value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult const Failed;

  /// @brief Field OK value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult const OK;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12723 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AdditionalContentModel
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AdditionalContentModel*
class CORDL_TYPE AdditionalContentModel : public ::System::Object {
public:
  // Declarations
  using UpdateEntitlementsResult = ::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult;

  /// @brief Field didInvalidateDataEvent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_didInvalidateDataEvent, put = __cordl_internal_set_didInvalidateDataEvent)) ::System::Action* didInvalidateDataEvent;

  /// @brief Convert operator to "::GlobalNamespace::IAdditionalContentEntitlementModel"
  constexpr operator ::GlobalNamespace::IAdditionalContentEntitlementModel*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IAdditionalContentModel"
  constexpr operator ::GlobalNamespace::IAdditionalContentModel*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x266e300, size 0xa4, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method GetLevelDataVersionInternalAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelDataVersion>* GetLevelDataVersionInternalAsync(::StringW levelId, ::System::Threading::CancellationToken token);

  /// @brief Method GetLevelEntitlementStatusInternalAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetLevelEntitlementStatusInternalAsync(::StringW levelId, ::System::Threading::CancellationToken token);

  /// @brief Method GetPackEntitlementStatusInternalAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetPackEntitlementStatusInternalAsync(::StringW levelPackId, ::System::Threading::CancellationToken token);

  /// @brief Method IAdditionalContentEntitlementModel.GetLevelDataVersionAsync, addr 0x266e440, size 0x10, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelDataVersion>* IAdditionalContentEntitlementModel_GetLevelDataVersionAsync(::StringW levelId,
                                                                                                                                                     ::System::Threading::CancellationToken token);

  /// @brief Method IAdditionalContentEntitlementModel.GetLevelEntitlementStatusAsync, addr 0x266e420, size 0x10, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* IAdditionalContentEntitlementModel_GetLevelEntitlementStatusAsync(::StringW levelId,
                                                                                                                                                     ::System::Threading::CancellationToken token);

  /// @brief Method IAdditionalContentEntitlementModel.GetPackEntitlementStatusAsync, addr 0x266e430, size 0x10, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* IAdditionalContentEntitlementModel_GetPackEntitlementStatusAsync(::StringW levelPackId,
                                                                                                                                                    ::System::Threading::CancellationToken token);

  /// @brief Method InvalidateData, addr 0x266e3e4, size 0x3c, virtual false, abstract: false, final false
  inline void InvalidateData();

  /// @brief Method InvalidateDataInternal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void InvalidateDataInternal();

  /// @brief Method IsPackBetterBuyThanLevelAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>* IsPackBetterBuyThanLevelAsync(::StringW levelPackId, ::System::Threading::CancellationToken token);

  static inline ::GlobalNamespace::AdditionalContentModel* New_ctor();

  /// @brief Method OnApplicationFocusChanged, addr 0x266e3a4, size 0x40, virtual false, abstract: false, final false
  inline void OnApplicationFocusChanged(bool hasFocus);

  /// @brief Method OpenLevelPackProductStoreAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenLevelPackProductStoreAsync(::StringW levelPackId, ::System::Threading::CancellationToken token);

  /// @brief Method OpenLevelProductStoreAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenLevelProductStoreAsync(::StringW levelId, ::System::Threading::CancellationToken token);

  constexpr ::System::Action*& __cordl_internal_get_didInvalidateDataEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didInvalidateDataEvent() const;

  constexpr void __cordl_internal_set_didInvalidateDataEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x266e250, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didInvalidateDataEvent, addr 0x266e118, size 0x9c, virtual true, abstract: false, final true
  inline void add_didInvalidateDataEvent(::System::Action* value);

  /// @brief Convert to "::GlobalNamespace::IAdditionalContentEntitlementModel"
  constexpr ::GlobalNamespace::IAdditionalContentEntitlementModel* i___GlobalNamespace__IAdditionalContentEntitlementModel() noexcept;

  /// @brief Convert to "::GlobalNamespace::IAdditionalContentModel"
  constexpr ::GlobalNamespace::IAdditionalContentModel* i___GlobalNamespace__IAdditionalContentModel() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_didInvalidateDataEvent, addr 0x266e1b4, size 0x9c, virtual true, abstract: false, final true
  inline void remove_didInvalidateDataEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AdditionalContentModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AdditionalContentModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AdditionalContentModel(AdditionalContentModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AdditionalContentModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AdditionalContentModel(AdditionalContentModel const&) = delete;

  /// @brief Field didInvalidateDataEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___didInvalidateDataEvent;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12724 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AdditionalContentModel, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AdditionalContentModel, ___didInvalidateDataEvent) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult, "", "AdditionalContentModel/UpdateEntitlementsResult");
NEED_NO_BOX(::GlobalNamespace::AdditionalContentModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AdditionalContentModel*, "", "AdditionalContentModel");
