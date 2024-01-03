#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlNodeList)
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Xml {
class XmlNodeList;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlNodeList);
// Type: System.Xml::XmlNodeList
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11523))
// CS Name: ::System.Xml::XmlNodeList*
class CORDL_TYPE XmlNodeList : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_Count();

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method System.IDisposable.Dispose, addr 0x2891968, size 0xc, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method PrivateDisposeNodeList, addr 0x2891974, size 0x4, virtual true, abstract: false, final false
  inline void PrivateDisposeNodeList();

  static inline ::System::Xml::XmlNodeList* New_ctor();

  /// @brief Method .ctor, addr 0x2891978, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "XmlNodeList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlNodeList(XmlNodeList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlNodeList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlNodeList(XmlNodeList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlNodeList();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlNodeList, 0x10>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlNodeList);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlNodeList*, "System.Xml", "XmlNodeList");
