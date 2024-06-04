#pragma once
// IWYU pragma private; include "GlobalNamespace/MockQuickPlaySetupModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MockQuickPlaySetupModel)
namespace GlobalNamespace {
class IQuickPlaySetupModel;
}
namespace GlobalNamespace {
class QuickPlaySetupData;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace GlobalNamespace {
class MockQuickPlaySetupModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockQuickPlaySetupModel);
// Type: ::MockQuickPlaySetupModel
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MockQuickPlaySetupModel*
class CORDL_TYPE MockQuickPlaySetupModel : public ::System::Object {
public:
  // Declarations
  /// @brief Field _quickPlaySetupData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__quickPlaySetupData, put = __cordl_internal_set__quickPlaySetupData))::GlobalNamespace::QuickPlaySetupData* _quickPlaySetupData;

  /// @brief Convert operator to "::GlobalNamespace::IQuickPlaySetupModel"
  constexpr operator ::GlobalNamespace::IQuickPlaySetupModel*() noexcept;

  /// @brief Method GetQuickPlaySetupAsync, addr 0x271c810, size 0x70, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>* GetQuickPlaySetupAsync(::System::Threading::CancellationToken cancellationToken);

  static inline ::GlobalNamespace::MockQuickPlaySetupModel* New_ctor();

  constexpr ::GlobalNamespace::QuickPlaySetupData*& __cordl_internal_get__quickPlaySetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::QuickPlaySetupData*> const& __cordl_internal_get__quickPlaySetupData() const;

  constexpr void __cordl_internal_set__quickPlaySetupData(::GlobalNamespace::QuickPlaySetupData* value);

  /// @brief Method .ctor, addr 0x271c880, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IQuickPlaySetupModel"
  constexpr ::GlobalNamespace::IQuickPlaySetupModel* i___GlobalNamespace__IQuickPlaySetupModel() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockQuickPlaySetupModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockQuickPlaySetupModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockQuickPlaySetupModel(MockQuickPlaySetupModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockQuickPlaySetupModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockQuickPlaySetupModel(MockQuickPlaySetupModel const&) = delete;

  /// @brief Field _quickPlaySetupData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::QuickPlaySetupData* ____quickPlaySetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockQuickPlaySetupModel, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MockQuickPlaySetupModel, ____quickPlaySetupData) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockQuickPlaySetupModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockQuickPlaySetupModel*, "", "MockQuickPlaySetupModel");
