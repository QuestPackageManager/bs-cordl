#pragma once
// IWYU pragma private; include "System/Xml/HWStack.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HWStack)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml {
class HWStack;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::HWStack);
// Dependencies System.ICloneable, System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.HWStack
class CORDL_TYPE HWStack : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Item, put = set_Item)) ::System::Object* Item[];

  __declspec(property(get = get_Length)) int32_t Length;

  /// @brief Field growthRate, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_growthRate, put = __cordl_internal_set_growthRate)) int32_t growthRate;

  /// @brief Field limit, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_limit, put = __cordl_internal_set_limit)) int32_t limit;

  /// @brief Field size, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_size, put = __cordl_internal_set_size)) int32_t size;

  /// @brief Field stack, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_stack, put = __cordl_internal_set_stack)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> stack;

  /// @brief Field used, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_used, put = __cordl_internal_set_used)) int32_t used;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method AddToTop, addr 0x43490f4, size 0x6c, virtual false, abstract: false, final false
  inline void AddToTop(::System::Object* o);

  /// @brief Method Clone, addr 0x43492c8, size 0xdc, virtual true, abstract: false, final true
  inline ::System::Object* Clone();

  static inline ::System::Xml::HWStack* New_ctor(int32_t GrowthRate);

  static inline ::System::Xml::HWStack* New_ctor(int32_t GrowthRate, int32_t limit);

  static inline ::System::Xml::HWStack* New_ctor(::ArrayW<::System::Object*, ::Array<::System::Object*>*> stack, int32_t growthRate, int32_t used, int32_t size);

  /// @brief Method Peek, addr 0x43490b0, size 0x44, virtual false, abstract: false, final false
  inline ::System::Object* Peek();

  /// @brief Method Pop, addr 0x4349068, size 0x48, virtual false, abstract: false, final false
  inline ::System::Object* Pop();

  /// @brief Method Push, addr 0x4348f30, size 0x138, virtual false, abstract: false, final false
  inline ::System::Object* Push();

  constexpr int32_t const& __cordl_internal_get_growthRate() const;

  constexpr int32_t& __cordl_internal_get_growthRate();

  constexpr int32_t const& __cordl_internal_get_limit() const;

  constexpr int32_t& __cordl_internal_get_limit();

  constexpr int32_t const& __cordl_internal_get_size() const;

  constexpr int32_t& __cordl_internal_get_size();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get_stack() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get_stack();

  constexpr int32_t const& __cordl_internal_get_used() const;

  constexpr int32_t& __cordl_internal_get_used();

  constexpr void __cordl_internal_set_growthRate(int32_t value);

  constexpr void __cordl_internal_set_limit(int32_t value);

  constexpr void __cordl_internal_set_size(int32_t value);

  constexpr void __cordl_internal_set_stack(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set_used(int32_t value);

  /// @brief Method .ctor, addr 0x4348eb4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t GrowthRate);

  /// @brief Method .ctor, addr 0x4348ebc, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(int32_t GrowthRate, int32_t limit);

  /// @brief Method .ctor, addr 0x4349284, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::Object*, ::Array<::System::Object*>*> stack, int32_t growthRate, int32_t used, int32_t size);

  /// @brief Method get_Item, addr 0x4349160, size 0x74, virtual false, abstract: false, final false
  inline ::System::Object* get_Item(int32_t index);

  /// @brief Method get_Length, addr 0x434927c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Length();

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Method set_Item, addr 0x43491d4, size 0xa8, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, ::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HWStack();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HWStack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HWStack(HWStack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HWStack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HWStack(HWStack const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7319 };

  /// @brief Field stack, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ___stack;

  /// @brief Field growthRate, offset: 0x18, size: 0x4, def value: None
  int32_t ___growthRate;

  /// @brief Field used, offset: 0x1c, size: 0x4, def value: None
  int32_t ___used;

  /// @brief Field size, offset: 0x20, size: 0x4, def value: None
  int32_t ___size;

  /// @brief Field limit, offset: 0x24, size: 0x4, def value: None
  int32_t ___limit;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::HWStack, ___stack) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::HWStack, ___growthRate) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::HWStack, ___used) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::HWStack, ___size) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::HWStack, ___limit) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::HWStack, 0x28>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::HWStack);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::HWStack*, "System.Xml", "HWStack");
