#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AdditionalContentModel)
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
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10559))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __AdditionalContentModel__UpdateEntitlementsResult(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AdditionalContentModel__UpdateEntitlementsResult();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field OK value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult const OK;

  /// @brief Field Failed value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult const Failed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AdditionalContentModel
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10560))
// CS Name: ::AdditionalContentModel*
class CORDL_TYPE AdditionalContentModel : public ::System::Object {
public:
  // Declarations
  using UpdateEntitlementsResult = ::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult;

  /// @brief Field didInvalidateDataEvent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_didInvalidateDataEvent, put = __cordl_internal_set_didInvalidateDataEvent))::System::Action* didInvalidateDataEvent;

  /// @brief Convert operator to "::GlobalNamespace::IAdditionalContentEntitlementModel"
  constexpr operator ::GlobalNamespace::IAdditionalContentEntitlementModel*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IAdditionalContentEntitlementModel"
  constexpr ::GlobalNamespace::IAdditionalContentEntitlementModel* i___GlobalNamespace__IAdditionalContentEntitlementModel() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IAdditionalContentModel"
  constexpr operator ::GlobalNamespace::IAdditionalContentModel*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IAdditionalContentModel"
  constexpr ::GlobalNamespace::IAdditionalContentModel* i___GlobalNamespace__IAdditionalContentModel() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr ::System::Action*& __cordl_internal_get_didInvalidateDataEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didInvalidateDataEvent() const;

  constexpr void __cordl_internal_set_didInvalidateDataEvent(::System::Action* value);

  /// @brief Method add_didInvalidateDataEvent, addr 0x125d390, size 0x9c, virtual true, abstract: false, final true
  inline void add_didInvalidateDataEvent(::System::Action* value);

  /// @brief Method remove_didInvalidateDataEvent, addr 0x125d42c, size 0x9c, virtual true, abstract: false, final true
  inline void remove_didInvalidateDataEvent(::System::Action* value);

  static inline ::GlobalNamespace::AdditionalContentModel* New_ctor();

  /// @brief Method .ctor, addr 0x125d4c8, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Dispose, addr 0x125d554, size 0x80, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method OnApplicationFocusChanged, addr 0x125d5d4, size 0x3c, virtual false, abstract: false, final false
  inline void OnApplicationFocusChanged(bool hasFocus);

  /// @brief Method InvalidateData, addr 0x125d610, size 0x38, virtual false, abstract: false, final false
  inline void InvalidateData();

  /// @brief Method InvalidateDataInternal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void InvalidateDataInternal();

  /// @brief Method GetLevelEntitlementStatusInternalAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetLevelEntitlementStatusInternalAsync(::StringW levelId, ::System::Threading::CancellationToken token);

  /// @brief Method GetPackEntitlementStatusInternalAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetPackEntitlementStatusInternalAsync(::StringW levelPackId, ::System::Threading::CancellationToken token);

  /// @brief Method IsPackBetterBuyThanLevelAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>* IsPackBetterBuyThanLevelAsync(::StringW levelPackId, ::System::Threading::CancellationToken token);

  /// @brief Method OpenLevelProductStoreAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenLevelProductStoreAsync(::StringW levelId, ::System::Threading::CancellationToken token);

  /// @brief Method OpenLevelPackProductStoreAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenLevelPackProductStoreAsync(::StringW levelPackId, ::System::Threading::CancellationToken token);

  /// @brief Method IAdditionalContentEntitlementModel.GetLevelEntitlementStatusAsync, addr 0x125d648, size 0x10, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* IAdditionalContentEntitlementModel_GetLevelEntitlementStatusAsync(::StringW levelId,
                                                                                                                                                     ::System::Threading::CancellationToken token);

  /// @brief Method IAdditionalContentEntitlementModel.GetPackEntitlementStatusAsync, addr 0x125d658, size 0x10, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* IAdditionalContentEntitlementModel_GetPackEntitlementStatusAsync(::StringW levelPackId,
                                                                                                                                                    ::System::Threading::CancellationToken token);

  // Ctor Parameters [CppParam { name: "", ty: "AdditionalContentModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AdditionalContentModel(AdditionalContentModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AdditionalContentModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AdditionalContentModel(AdditionalContentModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AdditionalContentModel();

public:
  /// @brief Field didInvalidateDataEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___didInvalidateDataEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AdditionalContentModel, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AdditionalContentModel, ___didInvalidateDataEvent) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult, "", "AdditionalContentModel/UpdateEntitlementsResult");
NEED_NO_BOX(::GlobalNamespace::AdditionalContentModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AdditionalContentModel*, "", "AdditionalContentModel");
