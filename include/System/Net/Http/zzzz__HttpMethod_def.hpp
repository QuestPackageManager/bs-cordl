#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpMethod)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net::Http {
class HttpMethod;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::HttpMethod);
// Type: System.Net.Http::HttpMethod
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http {
// Is value type: false
// CS Name: ::System.Net.Http::HttpMethod*
class CORDL_TYPE HttpMethod : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Method))::StringW Method;

  /// @brief Field delete_method, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_delete_method, put = setStaticF_delete_method))::System::Net::Http::HttpMethod* delete_method;

  /// @brief Field get_method, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_get_method, put = setStaticF_get_method))::System::Net::Http::HttpMethod* get_method;

  /// @brief Field head_method, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_head_method, put = setStaticF_head_method))::System::Net::Http::HttpMethod* head_method;

  /// @brief Field method, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_method, put = __cordl_internal_set_method))::StringW method;

  /// @brief Field options_method, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_options_method, put = setStaticF_options_method))::System::Net::Http::HttpMethod* options_method;

  /// @brief Field post_method, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_post_method, put = setStaticF_post_method))::System::Net::Http::HttpMethod* post_method;

  /// @brief Field put_method, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_put_method, put = setStaticF_put_method))::System::Net::Http::HttpMethod* put_method;

  /// @brief Field trace_method, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_trace_method, put = setStaticF_trace_method))::System::Net::Http::HttpMethod* trace_method;

  /// @brief Convert operator to "::System::IEquatable_1<::System::Net::Http::HttpMethod*>"
  constexpr operator ::System::IEquatable_1<::System::Net::Http::HttpMethod*>*() noexcept;

  /// @brief Method Equals, addr 0x2d6aa24, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2d6aa00, size 0x24, virtual true, abstract: false, final true
  inline bool Equals(::System::Net::Http::HttpMethod* other);

  /// @brief Method GetHashCode, addr 0x2d6aab0, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Net::Http::HttpMethod* New_ctor(::StringW method);

  /// @brief Method ToString, addr 0x2d6aad0, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::StringW const& __cordl_internal_get_method() const;

  constexpr ::StringW& __cordl_internal_get_method();

  constexpr void __cordl_internal_set_method(::StringW value);

  /// @brief Method .ctor, addr 0x2d6a798, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::StringW method);

  static inline ::System::Net::Http::HttpMethod* getStaticF_delete_method();

  static inline ::System::Net::Http::HttpMethod* getStaticF_get_method();

  static inline ::System::Net::Http::HttpMethod* getStaticF_head_method();

  static inline ::System::Net::Http::HttpMethod* getStaticF_options_method();

  static inline ::System::Net::Http::HttpMethod* getStaticF_post_method();

  static inline ::System::Net::Http::HttpMethod* getStaticF_put_method();

  static inline ::System::Net::Http::HttpMethod* getStaticF_trace_method();

  /// @brief Method get_Get, addr 0x2d6a930, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Net::Http::HttpMethod* get_Get();

  /// @brief Method get_Method, addr 0x2d6a988, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Method();

  /// @brief Method get_Post, addr 0x2d6a990, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Net::Http::HttpMethod* get_Post();

  /// @brief Convert to "::System::IEquatable_1<::System::Net::Http::HttpMethod*>"
  constexpr ::System::IEquatable_1<::System::Net::Http::HttpMethod*>* i___System__IEquatable_1___System__Net__Http__HttpMethod__() noexcept;

  /// @brief Method op_Equality, addr 0x2d6a9e8, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Net::Http::HttpMethod* left, ::System::Net::Http::HttpMethod* right);

  static inline void setStaticF_delete_method(::System::Net::Http::HttpMethod* value);

  static inline void setStaticF_get_method(::System::Net::Http::HttpMethod* value);

  static inline void setStaticF_head_method(::System::Net::Http::HttpMethod* value);

  static inline void setStaticF_options_method(::System::Net::Http::HttpMethod* value);

  static inline void setStaticF_post_method(::System::Net::Http::HttpMethod* value);

  static inline void setStaticF_put_method(::System::Net::Http::HttpMethod* value);

  static inline void setStaticF_trace_method(::System::Net::Http::HttpMethod* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpMethod();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpMethod", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpMethod(HttpMethod&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpMethod", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpMethod(HttpMethod const&) = delete;

  /// @brief Field method, offset: 0x10, size: 0x8, def value: None
  ::StringW ___method;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::HttpMethod, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Net::Http::HttpMethod, ___method) == 0x10, "Offset mismatch!");

} // namespace System::Net::Http
NEED_NO_BOX(::System::Net::Http::HttpMethod);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::HttpMethod*, "System.Net.Http", "HttpMethod");
