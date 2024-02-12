#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IAdditionalContentModel)
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
// Forward declare root types
namespace GlobalNamespace {
class IAdditionalContentModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IAdditionalContentModel);
// Type: ::IAdditionalContentModel
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16448))
// CS Name: ::IAdditionalContentModel*
class CORDL_TYPE IAdditionalContentModel {
public:
  // Declarations
  /// @brief Method add_didInvalidateDataEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_didInvalidateDataEvent(::System::Action* value);

  /// @brief Method remove_didInvalidateDataEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_didInvalidateDataEvent(::System::Action* value);

  /// @brief Method OpenLevelPackProductStoreAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenLevelPackProductStoreAsync(::StringW levelPackId, ::System::Threading::CancellationToken token);

  /// @brief Method IsPackBetterBuyThanLevelAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>* IsPackBetterBuyThanLevelAsync(::StringW levelPackId, ::System::Threading::CancellationToken token);

  /// @brief Method OpenLevelProductStoreAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenLevelProductStoreAsync(::StringW levelId, ::System::Threading::CancellationToken token);

  // Ctor Parameters [CppParam { name: "", ty: "IAdditionalContentModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAdditionalContentModel(IAdditionalContentModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAdditionalContentModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAdditionalContentModel(IAdditionalContentModel const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IAdditionalContentModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IAdditionalContentModel*, "", "IAdditionalContentModel");
