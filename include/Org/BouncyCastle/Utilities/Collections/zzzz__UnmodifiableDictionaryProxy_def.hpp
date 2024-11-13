#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Collections/UnmodifiableDictionaryProxy.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/Collections/zzzz__UnmodifiableDictionary_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnmodifiableDictionaryProxy)
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class IDictionary;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Collections {
class UnmodifiableDictionaryProxy;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionaryProxy);
// Type: Org.BouncyCastle.Utilities.Collections::UnmodifiableDictionaryProxy
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::Collections {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Utilities.Collections::UnmodifiableDictionaryProxy*
class CORDL_TYPE UnmodifiableDictionaryProxy : public ::Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_Keys)) ::System::Collections::ICollection* Keys;

  __declspec(property(get = get_SyncRoot)) ::System::Object* SyncRoot;

  __declspec(property(get = get_Values)) ::System::Collections::ICollection* Values;

  /// @brief Field d, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_d, put = __cordl_internal_set_d)) ::System::Collections::IDictionary* d;

  /// @brief Method Contains, addr 0x259f0dc, size 0xac, virtual true, abstract: false, final false
  inline bool Contains(::System::Object* k);

  /// @brief Method CopyTo, addr 0x259f188, size 0xb8, virtual true, abstract: false, final false
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method GetEnumerator, addr 0x259f2e4, size 0xa4, virtual true, abstract: false, final false
  inline ::System::Collections::IDictionaryEnumerator* GetEnumerator();

  /// @brief Method GetValue, addr 0x259f6bc, size 0xa8, virtual true, abstract: false, final false
  inline ::System::Object* GetValue(::System::Object* k);

  static inline ::Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionaryProxy* New_ctor(::System::Collections::IDictionary* d);

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get_d();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __cordl_internal_get_d() const;

  constexpr void __cordl_internal_set_d(::System::Collections::IDictionary* value);

  /// @brief Method .ctor, addr 0x259c3d4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IDictionary* d);

  /// @brief Method get_Count, addr 0x259f240, size 0xa4, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsFixedSize, addr 0x259f388, size 0xa4, virtual true, abstract: false, final false
  inline bool get_IsFixedSize();

  /// @brief Method get_IsSynchronized, addr 0x259f42c, size 0xa4, virtual true, abstract: false, final false
  inline bool get_IsSynchronized();

  /// @brief Method get_Keys, addr 0x259f574, size 0xa4, virtual true, abstract: false, final false
  inline ::System::Collections::ICollection* get_Keys();

  /// @brief Method get_SyncRoot, addr 0x259f4d0, size 0xa4, virtual true, abstract: false, final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Method get_Values, addr 0x259f618, size 0xa4, virtual true, abstract: false, final false
  inline ::System::Collections::ICollection* get_Values();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnmodifiableDictionaryProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnmodifiableDictionaryProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnmodifiableDictionaryProxy(UnmodifiableDictionaryProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnmodifiableDictionaryProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnmodifiableDictionaryProxy(UnmodifiableDictionaryProxy const&) = delete;

  /// @brief Field d, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___d;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1786 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionaryProxy, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionaryProxy, ___d) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Utilities::Collections
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionaryProxy);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionaryProxy*, "Org.BouncyCastle.Utilities.Collections", "UnmodifiableDictionaryProxy");
