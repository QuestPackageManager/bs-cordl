#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Collections/UnmodifiableSetProxy.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/Collections/zzzz__UnmodifiableSet_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnmodifiableSetProxy)
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Collections {
class UnmodifiableSetProxy;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Collections::UnmodifiableSetProxy);
// Dependencies Org.BouncyCastle.Utilities.Collections.UnmodifiableSet
namespace Org::BouncyCastle::Utilities::Collections {
// Is value type: false
// CS Name: Org.BouncyCastle.Utilities.Collections.UnmodifiableSetProxy
class CORDL_TYPE UnmodifiableSetProxy : public ::Org::BouncyCastle::Utilities::Collections::UnmodifiableSet {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_SyncRoot)) ::System::Object* SyncRoot;

  /// @brief Field s, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_s, put = __cordl_internal_set_s)) ::Org::BouncyCastle::Utilities::Collections::ISet* s;

  /// @brief Method Contains, addr 0x25d9a20, size 0xac, virtual true, abstract: false, final false
  inline bool Contains(::System::Object* o);

  /// @brief Method CopyTo, addr 0x25d9acc, size 0xb8, virtual true, abstract: false, final false
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method GetEnumerator, addr 0x25d9c28, size 0xa0, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  static inline ::Org::BouncyCastle::Utilities::Collections::UnmodifiableSetProxy* New_ctor(::Org::BouncyCastle::Utilities::Collections::ISet* s);

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet* const& __cordl_internal_get_s() const;

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& __cordl_internal_get_s();

  constexpr void __cordl_internal_set_s(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  /// @brief Method .ctor, addr 0x25d5e60, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Utilities::Collections::ISet* s);

  /// @brief Method get_Count, addr 0x25d9b84, size 0xa4, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsEmpty, addr 0x25d9cc8, size 0xa4, virtual true, abstract: false, final false
  inline bool get_IsEmpty();

  /// @brief Method get_IsFixedSize, addr 0x25d9d6c, size 0xa4, virtual true, abstract: false, final false
  inline bool get_IsFixedSize();

  /// @brief Method get_IsSynchronized, addr 0x25d9e10, size 0xa4, virtual true, abstract: false, final false
  inline bool get_IsSynchronized();

  /// @brief Method get_SyncRoot, addr 0x25d9eb4, size 0xa4, virtual true, abstract: false, final false
  inline ::System::Object* get_SyncRoot();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnmodifiableSetProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnmodifiableSetProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnmodifiableSetProxy(UnmodifiableSetProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnmodifiableSetProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnmodifiableSetProxy(UnmodifiableSetProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1790 };

  /// @brief Field s, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Collections::ISet* ___s;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Utilities::Collections::UnmodifiableSetProxy, ___s) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Collections::UnmodifiableSetProxy, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::Collections
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Collections::UnmodifiableSetProxy);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Collections::UnmodifiableSetProxy*, "Org.BouncyCastle.Utilities.Collections", "UnmodifiableSetProxy");
