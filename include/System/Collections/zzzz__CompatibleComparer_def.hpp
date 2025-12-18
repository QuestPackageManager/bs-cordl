#pragma once
// IWYU pragma private; include "System/Collections/CompatibleComparer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CompatibleComparer)
namespace System::Collections {
class IComparer;
}
namespace System::Collections {
class IEqualityComparer;
}
namespace System::Collections {
class IHashCodeProvider;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections {
class CompatibleComparer;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::CompatibleComparer);
// Dependencies System.Object
namespace System::Collections {
// Is value type: false
// CS Name: System.Collections.CompatibleComparer
class CORDL_TYPE CompatibleComparer : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Comparer)) ::System::Collections::IComparer* Comparer;

  __declspec(property(get = get_HashCodeProvider)) ::System::Collections::IHashCodeProvider* HashCodeProvider;

  /// @brief Field _comparer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__comparer, put = __cordl_internal_set__comparer)) ::System::Collections::IComparer* _comparer;

  /// @brief Field _hcp, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__hcp, put = __cordl_internal_set__hcp)) ::System::Collections::IHashCodeProvider* _hcp;

  /// @brief Convert operator to "::System::Collections::IEqualityComparer"
  constexpr operator ::System::Collections::IEqualityComparer*() noexcept;

  /// @brief Method Compare, addr 0x5a349a0, size 0x1c8, virtual false, abstract: false, final false
  inline int32_t Compare(::System::Object* a, ::System::Object* b);

  /// @brief Method Equals, addr 0x5a34988, size 0x18, virtual true, abstract: false, final true
  inline bool Equals(::System::Object* a, ::System::Object* b);

  /// @brief Method GetHashCode, addr 0x5a34b68, size 0x118, virtual true, abstract: false, final true
  inline int32_t GetHashCode(::System::Object* obj);

  static inline ::System::Collections::CompatibleComparer* New_ctor(::System::Collections::IHashCodeProvider* hashCodeProvider, ::System::Collections::IComparer* comparer);

  constexpr ::System::Collections::IComparer* const& __cordl_internal_get__comparer() const;

  constexpr ::System::Collections::IComparer*& __cordl_internal_get__comparer();

  constexpr ::System::Collections::IHashCodeProvider* const& __cordl_internal_get__hcp() const;

  constexpr ::System::Collections::IHashCodeProvider*& __cordl_internal_get__hcp();

  constexpr void __cordl_internal_set__comparer(::System::Collections::IComparer* value);

  constexpr void __cordl_internal_set__hcp(::System::Collections::IHashCodeProvider* value);

  /// @brief Method .ctor, addr 0x5a34970, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IHashCodeProvider* hashCodeProvider, ::System::Collections::IComparer* comparer);

  /// @brief Method get_Comparer, addr 0x5a34980, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::IComparer* get_Comparer();

  /// @brief Method get_HashCodeProvider, addr 0x5a34978, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::IHashCodeProvider* get_HashCodeProvider();

  /// @brief Convert to "::System::Collections::IEqualityComparer"
  constexpr ::System::Collections::IEqualityComparer* i___System__Collections__IEqualityComparer() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompatibleComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CompatibleComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompatibleComparer(CompatibleComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompatibleComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompatibleComparer(CompatibleComparer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3702 };

  /// @brief Field _hcp, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IHashCodeProvider* ____hcp;

  /// @brief Field _comparer, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::IComparer* ____comparer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Collections::CompatibleComparer, ____hcp) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::CompatibleComparer, ____comparer) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Collections::CompatibleComparer, 0x20>, "Size mismatch!");

} // namespace System::Collections
NEED_NO_BOX(::System::Collections::CompatibleComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::CompatibleComparer*, "System.Collections", "CompatibleComparer");
