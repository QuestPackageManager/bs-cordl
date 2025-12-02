#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/ILSupport.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ILSupport)
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class ILSupport;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::LowLevel::Unsafe::ILSupport);
// Dependencies System.Object
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// CS Name: Unity.Collections.LowLevel.Unsafe.ILSupport
class CORDL_TYPE ILSupport : public ::System::Object {
public:
  // Declarations
  /// @brief Method AddressOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void* AddressOf(::ByRef<T> thing);

  /// @brief Method AsRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ByRef<T> AsRef(::ByRef<T> thing);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ILSupport();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ILSupport", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ILSupport(ILSupport&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ILSupport", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILSupport(ILSupport const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23386 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::ILSupport, 0x10>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
NEED_NO_BOX(::Unity::Collections::LowLevel::Unsafe::ILSupport);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::ILSupport*, "Unity.Collections.LowLevel.Unsafe", "ILSupport");
