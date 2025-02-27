#pragma once
// IWYU pragma private; include "System/Collections/Specialized/CompatibleComparer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CompatibleComparer)
namespace System::Collections {
class IComparer;
}
namespace System::Collections {
class IHashCodeProvider;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections::Specialized {
class CompatibleComparer;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::Specialized::CompatibleComparer);
// Dependencies System.Collections.IEqualityComparer, System.Object
namespace System::Collections::Specialized {
// Is value type: false
// CS Name: System.Collections.Specialized.CompatibleComparer
class CORDL_TYPE CompatibleComparer : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Comparer)) ::System::Collections::IComparer* Comparer;

  __declspec(property(get = get_HashCodeProvider)) ::System::Collections::IHashCodeProvider* HashCodeProvider;

  /// @brief Field _comparer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__comparer, put = __cordl_internal_set__comparer)) ::System::Collections::IComparer* _comparer;

  /// @brief Field _hcp, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__hcp, put = __cordl_internal_set__hcp)) ::System::Collections::IHashCodeProvider* _hcp;

  /// @brief Field defaultComparer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_defaultComparer, put = setStaticF_defaultComparer)) ::System::Collections::IComparer* defaultComparer;

  /// @brief Field defaultHashProvider, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_defaultHashProvider, put = setStaticF_defaultHashProvider)) ::System::Collections::IHashCodeProvider* defaultHashProvider;

  /// @brief Convert operator to "::System::Collections::IEqualityComparer"
  constexpr operator ::System::Collections::IEqualityComparer*() noexcept;

  /// @brief Method Equals, addr 0x44943a4, size 0x200, virtual true, abstract: false, final true
  inline bool Equals(::System::Object* a, ::System::Object* b);

  /// @brief Method GetHashCode, addr 0x44945a4, size 0x108, virtual true, abstract: false, final true
  inline int32_t GetHashCode(::System::Object* obj);

  static inline ::System::Collections::Specialized::CompatibleComparer* New_ctor(::System::Collections::IComparer* comparer, ::System::Collections::IHashCodeProvider* hashCodeProvider);

  constexpr ::System::Collections::IComparer* const& __cordl_internal_get__comparer() const;

  constexpr ::System::Collections::IComparer*& __cordl_internal_get__comparer();

  constexpr ::System::Collections::IHashCodeProvider* const& __cordl_internal_get__hcp() const;

  constexpr ::System::Collections::IHashCodeProvider*& __cordl_internal_get__hcp();

  constexpr void __cordl_internal_set__comparer(::System::Collections::IComparer* value);

  constexpr void __cordl_internal_set__hcp(::System::Collections::IHashCodeProvider* value);

  /// @brief Method .ctor, addr 0x4493ba0, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IComparer* comparer, ::System::Collections::IHashCodeProvider* hashCodeProvider);

  static inline ::System::Collections::IComparer* getStaticF_defaultComparer();

  static inline ::System::Collections::IHashCodeProvider* getStaticF_defaultHashProvider();

  /// @brief Method get_Comparer, addr 0x44946ac, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::IComparer* get_Comparer();

  /// @brief Method get_DefaultComparer, addr 0x4493388, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::Collections::IComparer* get_DefaultComparer();

  /// @brief Method get_DefaultHashCodeProvider, addr 0x44932b0, size 0xd8, virtual false, abstract: false, final false
  static inline ::System::Collections::IHashCodeProvider* get_DefaultHashCodeProvider();

  /// @brief Method get_HashCodeProvider, addr 0x44946b4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::IHashCodeProvider* get_HashCodeProvider();

  /// @brief Convert to "::System::Collections::IEqualityComparer"
  constexpr ::System::Collections::IEqualityComparer* i___System__Collections__IEqualityComparer() noexcept;

  static inline void setStaticF_defaultComparer(::System::Collections::IComparer* value);

  static inline void setStaticF_defaultHashProvider(::System::Collections::IHashCodeProvider* value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9506 };

  /// @brief Field _comparer, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IComparer* ____comparer;

  /// @brief Field _hcp, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::IHashCodeProvider* ____hcp;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Collections::Specialized::CompatibleComparer, ____comparer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::CompatibleComparer, ____hcp) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Collections::Specialized::CompatibleComparer, 0x20>, "Size mismatch!");

} // namespace System::Collections::Specialized
NEED_NO_BOX(::System::Collections::Specialized::CompatibleComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::CompatibleComparer*, "System.Collections.Specialized", "CompatibleComparer");
