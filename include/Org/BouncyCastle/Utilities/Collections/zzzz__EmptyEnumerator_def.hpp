#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EmptyEnumerator)
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Collections {
class EmptyEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Collections::EmptyEnumerator);
// Type: Org.BouncyCastle.Utilities.Collections::EmptyEnumerator
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::Collections {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Utilities.Collections::EmptyEnumerator*
class CORDL_TYPE EmptyEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current))::System::Object* Current;

  /// @brief Field Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance))::System::Collections::IEnumerator* Instance;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Method MoveNext, addr 0x13b92c8, size 0x8, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Org::BouncyCastle::Utilities::Collections::EmptyEnumerator* New_ctor();

  /// @brief Method Reset, addr 0x13b92d0, size 0x4, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method .ctor, addr 0x13b92c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::IEnumerator* getStaticF_Instance();

  /// @brief Method get_Current, addr 0x13b92d4, size 0x50, virtual true, abstract: false, final true
  inline ::System::Object* get_Current();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  static inline void setStaticF_Instance(::System::Collections::IEnumerator* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EmptyEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EmptyEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EmptyEnumerator(EmptyEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EmptyEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EmptyEnumerator(EmptyEnumerator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Collections::EmptyEnumerator, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::Collections
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Collections::EmptyEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Collections::EmptyEnumerator*, "Org.BouncyCastle.Utilities.Collections", "EmptyEnumerator");
