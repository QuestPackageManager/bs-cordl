#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/Collections/zzzz__UnmodifiableList_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnmodifiableListProxy)
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace System::Collections {
class IList;
}
namespace System {
class Array;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Collections {
class UnmodifiableListProxy;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Collections::UnmodifiableListProxy);
// Type: Org.BouncyCastle.Utilities.Collections::UnmodifiableListProxy
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1787))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1788))
// CS Name: ::Org.BouncyCastle.Utilities.Collections::UnmodifiableListProxy*
class CORDL_TYPE UnmodifiableListProxy : public ::Org::BouncyCastle::Utilities::Collections::UnmodifiableList {
public:
  // Declarations
  /// @brief Field l, offset 0x10, size 0x8
  __declspec(property(get = __get_l, put = __set_l))::System::Collections::IList* l;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  constexpr ::System::Collections::IList*& __get_l();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get_l() const;

  constexpr void __set_l(::System::Collections::IList* value);

  static inline ::Org::BouncyCastle::Utilities::Collections::UnmodifiableListProxy* New_ctor(::System::Collections::IList* l);

  /// @brief Method .ctor, addr 0x1157554, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IList* l);

  /// @brief Method Contains, addr 0x115aaa4, size 0xac, virtual true, abstract: false, final false
  inline bool Contains(::System::Object* o);

  /// @brief Method CopyTo, addr 0x115ab50, size 0xb8, virtual true, abstract: false, final false
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method get_Count, addr 0x115ac08, size 0xa4, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method GetEnumerator, addr 0x115acac, size 0xa0, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method IndexOf, addr 0x115ad4c, size 0xac, virtual true, abstract: false, final false
  inline int32_t IndexOf(::System::Object* o);

  /// @brief Method get_IsFixedSize, addr 0x115adf8, size 0xa4, virtual true, abstract: false, final false
  inline bool get_IsFixedSize();

  /// @brief Method get_IsSynchronized, addr 0x115ae9c, size 0xa4, virtual true, abstract: false, final false
  inline bool get_IsSynchronized();

  /// @brief Method get_SyncRoot, addr 0x115af40, size 0xa4, virtual true, abstract: false, final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Method GetValue, addr 0x115afe4, size 0xa8, virtual true, abstract: false, final false
  inline ::System::Object* GetValue(int32_t i);

  // Ctor Parameters [CppParam { name: "", ty: "UnmodifiableListProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnmodifiableListProxy(UnmodifiableListProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnmodifiableListProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnmodifiableListProxy(UnmodifiableListProxy const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnmodifiableListProxy();

public:
  /// @brief Field l, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IList* ___l;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Collections::UnmodifiableListProxy, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Collections::UnmodifiableListProxy, ___l) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Utilities::Collections
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Collections::UnmodifiableListProxy);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Collections::UnmodifiableListProxy*, "Org.BouncyCastle.Utilities.Collections", "UnmodifiableListProxy");
