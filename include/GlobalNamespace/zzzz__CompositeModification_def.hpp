#pragma once
// IWYU pragma private; include "GlobalNamespace\CompositeModification.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CompositeModificationFlags_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CompositeModification)
namespace GlobalNamespace {
struct CompositeModificationFlags;
}
// Forward declare root types
namespace GlobalNamespace {
class CompositeModification;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CompositeModification*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CompositeModification*, "", "CompositeModification");
// Dependencies CompositeModificationFlags, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CompositeModification
class CORDL_TYPE CompositeModification : public ::System::Object {
public:
  // Declarations
  /// @brief Field _flags, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__flags, put = __cordl_internal_set__flags)) ::GlobalNamespace::CompositeModificationFlags _flags;

  __declspec(property(get = get_flags, put = set_flags)) ::GlobalNamespace::CompositeModificationFlags flags;

  static inline ::GlobalNamespace::CompositeModification* New_ctor();

  constexpr ::GlobalNamespace::CompositeModificationFlags const& __cordl_internal_get__flags() const;

  constexpr ::GlobalNamespace::CompositeModificationFlags& __cordl_internal_get__flags();

  constexpr void __cordl_internal_set__flags(::GlobalNamespace::CompositeModificationFlags value);

  /// @brief Method .ctor, addr 0x59932fc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_flags, addr 0x5993378, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::CompositeModificationFlags get_flags();

  /// @brief Method set_flags, addr 0x5993380, size 0x8, virtual false, abstract: false, final false
  inline void set_flags(::GlobalNamespace::CompositeModificationFlags value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompositeModification();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CompositeModification", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompositeModification(CompositeModification&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompositeModification", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompositeModification(CompositeModification const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5831 };

  /// @brief Field _flags, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::CompositeModificationFlags ____flags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CompositeModification, ____flags) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CompositeModification) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
