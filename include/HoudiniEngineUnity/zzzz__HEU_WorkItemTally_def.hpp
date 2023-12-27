#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_WorkItemTally)
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_WorkItemTally;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_WorkItemTally);
// Type: HoudiniEngineUnity::HEU_WorkItemTally
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9774))
// CS Name: ::HoudiniEngineUnity::HEU_WorkItemTally*
class CORDL_TYPE HEU_WorkItemTally : public ::System::Object {
public:
  // Declarations
  /// @brief Field _totalWorkItems, offset 0x10, size 0x4
  __declspec(property(get = __get__totalWorkItems, put = __set__totalWorkItems)) int32_t _totalWorkItems;

  /// @brief Field _waitingWorkItems, offset 0x14, size 0x4
  __declspec(property(get = __get__waitingWorkItems, put = __set__waitingWorkItems)) int32_t _waitingWorkItems;

  /// @brief Field _scheduledWorkItems, offset 0x18, size 0x4
  __declspec(property(get = __get__scheduledWorkItems, put = __set__scheduledWorkItems)) int32_t _scheduledWorkItems;

  /// @brief Field _cookingWorkItems, offset 0x1c, size 0x4
  __declspec(property(get = __get__cookingWorkItems, put = __set__cookingWorkItems)) int32_t _cookingWorkItems;

  /// @brief Field _cookedWorkItems, offset 0x20, size 0x4
  __declspec(property(get = __get__cookedWorkItems, put = __set__cookedWorkItems)) int32_t _cookedWorkItems;

  /// @brief Field _erroredWorkItems, offset 0x24, size 0x4
  __declspec(property(get = __get__erroredWorkItems, put = __set__erroredWorkItems)) int32_t _erroredWorkItems;

  constexpr int32_t& __get__totalWorkItems();

  constexpr int32_t const& __get__totalWorkItems() const;

  constexpr void __set__totalWorkItems(int32_t value);

  constexpr int32_t& __get__waitingWorkItems();

  constexpr int32_t const& __get__waitingWorkItems() const;

  constexpr void __set__waitingWorkItems(int32_t value);

  constexpr int32_t& __get__scheduledWorkItems();

  constexpr int32_t const& __get__scheduledWorkItems() const;

  constexpr void __set__scheduledWorkItems(int32_t value);

  constexpr int32_t& __get__cookingWorkItems();

  constexpr int32_t const& __get__cookingWorkItems() const;

  constexpr void __set__cookingWorkItems(int32_t value);

  constexpr int32_t& __get__cookedWorkItems();

  constexpr int32_t const& __get__cookedWorkItems() const;

  constexpr void __set__cookedWorkItems(int32_t value);

  constexpr int32_t& __get__erroredWorkItems();

  constexpr int32_t const& __get__erroredWorkItems() const;

  constexpr void __set__erroredWorkItems(int32_t value);

  /// @brief Method ZeroAll addr 0x219b8fc size 0xc virtual false final false
  inline void ZeroAll();

  /// @brief Method AreAllWorkItemsComplete addr 0x219c9a8 size 0x38 virtual false final false
  inline bool AreAllWorkItemsComplete();

  /// @brief Method AnyWorkItemsFailed addr 0x219c9e0 size 0x10 virtual false final false
  inline bool AnyWorkItemsFailed();

  /// @brief Method AnyWorkItemsPending addr 0x219ca48 size 0x44 virtual false final false
  inline bool AnyWorkItemsPending();

  /// @brief Method ProgressRatio addr 0x219ca8c size 0xac virtual false final false
  inline ::StringW ProgressRatio();

  static inline ::HoudiniEngineUnity::HEU_WorkItemTally* New_ctor();

  /// @brief Method .ctor addr 0x219c834 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_WorkItemTally", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_WorkItemTally(HEU_WorkItemTally&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_WorkItemTally", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_WorkItemTally(HEU_WorkItemTally const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_WorkItemTally();

public:
  /// @brief Field _totalWorkItems, offset: 0x10, size: 0x4, def value: None
  int32_t ____totalWorkItems;

  /// @brief Field _waitingWorkItems, offset: 0x14, size: 0x4, def value: None
  int32_t ____waitingWorkItems;

  /// @brief Field _scheduledWorkItems, offset: 0x18, size: 0x4, def value: None
  int32_t ____scheduledWorkItems;

  /// @brief Field _cookingWorkItems, offset: 0x1c, size: 0x4, def value: None
  int32_t ____cookingWorkItems;

  /// @brief Field _cookedWorkItems, offset: 0x20, size: 0x4, def value: None
  int32_t ____cookedWorkItems;

  /// @brief Field _erroredWorkItems, offset: 0x24, size: 0x4, def value: None
  int32_t ____erroredWorkItems;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_WorkItemTally, 0x28>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_WorkItemTally);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_WorkItemTally*, "HoudiniEngineUnity", "HEU_WorkItemTally");
