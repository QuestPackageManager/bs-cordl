#pragma once
// IWYU pragma private; include "GlobalNamespace\AdditionalContentModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AdditionalContentModel)
namespace GlobalNamespace {
struct AdditionalContentModel_UpdateEntitlementsResult;
}
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
namespace Zenject {
class IInitializable;
}
// Forward declare root types
namespace GlobalNamespace {
struct AdditionalContentModel_UpdateEntitlementsResult;
}
namespace GlobalNamespace {
class AdditionalContentModel;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AdditionalContentModel_UpdateEntitlementsResult);
MARK_REF_T(::GlobalNamespace::AdditionalContentModel*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AdditionalContentModel_UpdateEntitlementsResult, "", "AdditionalContentModel/UpdateEntitlementsResult");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AdditionalContentModel*, "", "AdditionalContentModel");
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: AdditionalContentModel/UpdateEntitlementsResult
struct CORDL_TYPE AdditionalContentModel_UpdateEntitlementsResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AdditionalContentModel_UpdateEntitlementsResult_Unwrapped
  enum struct __AdditionalContentModel_UpdateEntitlementsResult_Unwrapped : int32_t {
    __E_OK = static_cast<int32_t>(0x0),
    __E_Failed = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AdditionalContentModel_UpdateEntitlementsResult_Unwrapped() const noexcept {
    return static_cast<__AdditionalContentModel_UpdateEntitlementsResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AdditionalContentModel_UpdateEntitlementsResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AdditionalContentModel_UpdateEntitlementsResult(int32_t value__) noexcept;

  /// @brief Field Failed value: I32(1)
  static ::GlobalNamespace::AdditionalContentModel_UpdateEntitlementsResult const Failed;

  /// @brief Field OK value: I32(0)
  static ::GlobalNamespace::AdditionalContentModel_UpdateEntitlementsResult const OK;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14765 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AdditionalContentModel_UpdateEntitlementsResult, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AdditionalContentModel_UpdateEntitlementsResult) == 0x4, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AdditionalContentModel
class CORDL_TYPE AdditionalContentModel : public ::System::Object {
public:
  // Declarations
  using UpdateEntitlementsResult = ::GlobalNamespace::AdditionalContentModel_UpdateEntitlementsResult;

  /// @brief Field didInvalidateDataEvent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_didInvalidateDataEvent, put = __cordl_internal_set_didInvalidateDataEvent)) ::System::Action* didInvalidateDataEvent;

  /// @brief Convert operator to "::GlobalNamespace::IAdditionalContentEntitlementModel"
  constexpr operator ::GlobalNamespace::IAdditionalContentEntitlementModel*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IAdditionalContentModel"
  constexpr operator ::GlobalNamespace::IAdditionalContentModel*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Method Dispose, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method GetExcludedLevelIdsInternalAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::ArrayW<::StringW>>* GetExcludedLevelIdsInternalAsync(::System::Threading::CancellationToken token);

  /// @brief Method GetLevelDataVersionInternalAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelDataVersion>* GetLevelDataVersionInternalAsync(::StringW levelId, ::System::Threading::CancellationToken token);

  /// @brief Method GetLevelEntitlementStatusInternalAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetLevelEntitlementStatusInternalAsync(::StringW levelId, ::System::Threading::CancellationToken token);

  /// @brief Method GetPackEntitlementStatusInternalAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetPackEntitlementStatusInternalAsync(::StringW levelPackId, ::System::Threading::CancellationToken token);

  /// @brief Method IAdditionalContentEntitlementModel.GetExcludedLevelIdsAsync, addr 0x36fb85c, size 0x10, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::ArrayW<::StringW>>* IAdditionalContentEntitlementModel_GetExcludedLevelIdsAsync(::System::Threading::CancellationToken token);

  /// @brief Method IAdditionalContentEntitlementModel.GetLevelDataVersionAsync, addr 0x36fb84c, size 0x10, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelDataVersion>* IAdditionalContentEntitlementModel_GetLevelDataVersionAsync(::StringW levelId,
                                                                                                                                                     ::System::Threading::CancellationToken token);

  /// @brief Method IAdditionalContentEntitlementModel.GetLevelEntitlementStatusAsync, addr 0x36fb82c, size 0x10, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* IAdditionalContentEntitlementModel_GetLevelEntitlementStatusAsync(::StringW levelId,
                                                                                                                                                     ::System::Threading::CancellationToken token);

  /// @brief Method IAdditionalContentEntitlementModel.GetPackEntitlementStatusAsync, addr 0x36fb83c, size 0x10, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* IAdditionalContentEntitlementModel_GetPackEntitlementStatusAsync(::StringW levelPackId,
                                                                                                                                                    ::System::Threading::CancellationToken token);

  /// @brief Method Initialize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Initialize();

  /// @brief Method InvalidateData, addr 0x36fb7d4, size 0x3c, virtual false, abstract: false, final false
  inline void InvalidateData();

  /// @brief Method InvalidateDataInternal, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void InvalidateDataInternal();

  /// @brief Method IsPackBetterBuyThanLevelAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>* IsPackBetterBuyThanLevelAsync(::StringW levelPackId, ::System::Threading::CancellationToken token);

  static inline ::GlobalNamespace::AdditionalContentModel* New_ctor();

  /// @brief Method NotifyDataChanged, addr 0x36fb810, size 0x1c, virtual false, abstract: false, final false
  inline void NotifyDataChanged();

  /// @brief Method OpenLevelPackProductStoreAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenLevelPackProductStoreAsync(::StringW levelPackId, ::System::Threading::CancellationToken token);

  /// @brief Method OpenLevelProductStoreAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenLevelProductStoreAsync(::StringW levelId, ::System::Threading::CancellationToken token);

  /// @brief Method OpenStore, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OpenStore(::StringW uri);

  constexpr ::System::Action* const& __cordl_internal_get_didInvalidateDataEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didInvalidateDataEvent();

  constexpr void __cordl_internal_set_didInvalidateDataEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x36fb86c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didInvalidateDataEvent, addr 0x36fb67c, size 0xac, virtual true, abstract: false, final true
  inline void add_didInvalidateDataEvent(::System::Action* value);

  /// @brief Convert to "::GlobalNamespace::IAdditionalContentEntitlementModel"
  constexpr ::GlobalNamespace::IAdditionalContentEntitlementModel* i___GlobalNamespace__IAdditionalContentEntitlementModel() noexcept;

  /// @brief Convert to "::GlobalNamespace::IAdditionalContentModel"
  constexpr ::GlobalNamespace::IAdditionalContentModel* i___GlobalNamespace__IAdditionalContentModel() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::Zenject::IInitializable"
  constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

  /// @brief Method remove_didInvalidateDataEvent, addr 0x36fb728, size 0xac, virtual true, abstract: false, final true
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14766 };

  /// @brief Field didInvalidateDataEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___didInvalidateDataEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AdditionalContentModel, ___didInvalidateDataEvent) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AdditionalContentModel) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
